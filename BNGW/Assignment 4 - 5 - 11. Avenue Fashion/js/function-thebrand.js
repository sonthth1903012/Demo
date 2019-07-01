$(document).ready(function () {
    if(sessionStorage.getItem("brand-string")){
        var brand = JSON.parse(sessionStorage.getItem("brand-string"));
        console.log(sessionStorage.getItem("brand-string"));
        console.log(JSON.parse(sessionStorage.getItem("brand-string")));
        $.each($(".company"),function (k,v) {
            $(v).children("p:nth-child(1)").text(brand.company[k%3].title);
            $(v).children("p:nth-child(2)").text(brand.company[k%3].desc);
            $(v).children("p:nth-child(3)").text(brand.company[k%3].content);
        })
        $(".tittle").text(brand.intro.title);
        $(".slogan").text(brand.intro.slogan);
    }
    else{
        $.ajax({
            url: "data/thebrand.json",
            method: "get",
            success: function (brand) {
                sessionStorage.setItem("brand-string",JSON.stringify(brand))
                $.each($(".company"),function (k,v) {
                    $(v).children("p:nth-child(1)").text(brand.company[k%3].title);
                    $(v).children("p:nth-child(2)").text(brand.company[k%3].desc);
                    $(v).children("p:nth-child(3)").text(brand.company[k%3].content);
                })
                $(".tittle").text(brand.intro.title);
                $(".slogan").text(brand.intro.slogan);
            }
        });
    }
})



