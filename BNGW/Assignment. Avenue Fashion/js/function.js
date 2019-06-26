var map;
function initMap() {
    navigator.geolocation.getCurrentPosition(function (position) {
        var lat = 0,long = 0;
        lat = position.coords.latitude;
        long = position.coords.longitude;
        map = new google.maps.Map(document.getElementById('map'), {
            center: {lat: lat, lng: long},
            zoom: 16
        });
    })
};

var stores;
$(document).ready(function () {
    $.ajax({
        url: "data/stores.json",
        method: "get",
        success: function (json) {
            stores = json;
            $.each($(".local-stores"),function (k,v) {
                $(v).children("h2").text(stores[k%3].name);
                $(v).children("p:nth-child(2)").text(stores[k%3].adress);
                $(v).children("p:nth-child(3)").text(stores[k%3].desc);
            })
            $("div.stores-detail > div.local-stores > p:nth-child(4)").text(stores[0].adress);
            $("div.stores-detail > div.local-stores > p:nth-child(5)").text(stores[0].phone);
            $("div.stores-detail > div.local-stores > p:nth-child(6)").text(stores[0].web);
            $("div.stores-detail > div.local-stores > p:nth-child(7)").text(stores[0].email);
            $("div.stores-detail > div.local-stores > p:nth-child(8)").text(stores[0].time);
        }
    });
})
function local(x) {
    $("div.stores-detail > div.local-stores > h2").text(stores[x].name);
    $("div.stores-detail > div.local-stores > p:nth-child(2)").text(stores[x].adress);
    $("div.stores-detail > div.local-stores > p:nth-child(3)").text(stores[x].desc);
    $("div.stores-detail > div.local-stores > p:nth-child(4)").text(stores[x].adress);
    $("div.stores-detail > div.local-stores > p:nth-child(5)").text(stores[x].phone);
    $("div.stores-detail > div.local-stores > p:nth-child(6)").text(stores[x].web);
    $("div.stores-detail > div.local-stores > p:nth-child(7)").text(stores[x].email);
    $("div.stores-detail > div.local-stores > p:nth-child(8)").text(stores[x].time);
}

