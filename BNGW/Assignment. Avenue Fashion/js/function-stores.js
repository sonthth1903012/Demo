function initMap(x,y) {
    navigator.geolocation.getCurrentPosition(function (position) {
        var map = new google.maps.Map(document.getElementById('map'), {
            center: {lat: x, lng: y},
            zoom: 16
        });
    })
};

$(document).ready(function () {
    if(sessionStorage.getItem("stores-string")){
        var stores = JSON.parse(sessionStorage.getItem("stores-string"));
        console.log(sessionStorage.getItem("stores-string"));
        console.log(JSON.parse(sessionStorage.getItem("stores-string")));
        $.each($(".local-stores"),function (k,v) {
            $(v).children("h2").text(stores.local[k%3].name);
            $(v).children("p:nth-child(2)").text(stores.local[k%3].adress);
            $(v).children("p:nth-child(3)").text(stores.local[k%3].desc);
        })
        $("div.stores-detail > div.local-stores > p:nth-child(4)").text(stores.local[0].adress);
        $("div.stores-detail > div.local-stores > p:nth-child(5)").text(stores.local[0].phone);
        $("div.stores-detail > div.local-stores > p:nth-child(6)").text(stores.local[0].web);
        $("div.stores-detail > div.local-stores > p:nth-child(7)").text(stores.local[0].email);
        $("div.stores-detail > div.local-stores > p:nth-child(8)").text(stores.local[0].time);
        $(".tittle").text(stores.intro.title);
        $(".slogan").text(stores.intro.slogan);
    }
    else{
        $.ajax({
            url: "data/stores.json",
            method: "get",
            success: function (stores) {
                sessionStorage.setItem("stores-string",JSON.stringify(stores))
                $.each($(".local-stores"),function (k,v) {
                    $(v).children("h2").text(stores.local[k%3].name);
                    $(v).children("p:nth-child(2)").text(stores.local[k%3].adress);
                    $(v).children("p:nth-child(3)").text(stores.local[k%3].desc);
                })
                $("div.stores-detail > div.local-stores > p:nth-child(4)").text(stores.local[0].adress);
                $("div.stores-detail > div.local-stores > p:nth-child(5)").text(stores.local[0].phone);
                $("div.stores-detail > div.local-stores > p:nth-child(6)").text(stores.local[0].web);
                $("div.stores-detail > div.local-stores > p:nth-child(7)").text(stores.local[0].email);
                $("div.stores-detail > div.local-stores > p:nth-child(8)").text(stores.local[0].time);
                $(".tittle").text(stores.intro.title);
                $(".slogan").text(stores.intro.slogan);
            }
        });
    }
    initMap(51.5124,-0.142005);
})

function local(x) {
    var stores = JSON.parse(sessionStorage.getItem("stores-string"));
    $("div.stores-detail > div.local-stores > h2").text(stores.local[x].name);
    $("div.stores-detail > div.local-stores > p:nth-child(2)").text(stores.local[x].adress);
    $("div.stores-detail > div.local-stores > p:nth-child(3)").text(stores.local[x].desc);
    $("div.stores-detail > div.local-stores > p:nth-child(4)").text(stores.local[x].adress);
    $("div.stores-detail > div.local-stores > p:nth-child(5)").text(stores.local[x].phone);
    $("div.stores-detail > div.local-stores > p:nth-child(6)").text(stores.local[x].web);
    $("div.stores-detail > div.local-stores > p:nth-child(7)").text(stores.local[x].email);
    $("div.stores-detail > div.local-stores > p:nth-child(8)").text(stores.local[x].time);
    initMap(parseFloat(stores.local[x].ggmap.lat),parseFloat(stores.local[x].ggmap.long));
}

