$(document).ready(function () {
    if(sessionStorage.getItem("activebox-string") == null){
        $.ajax({
            url: "data/activebox.json",
            method: "get",
            success: function (activebox) {
                sessionStorage.setItem("activebox-string",JSON.stringify(activebox))
                // $("div.member").each(function (index) {
                //     $(this).children("div:nth-child(1)").html(activebox.team[index].avatar);
                //     $(this).children("p:nth-child(2)").text(activebox.team[index].name);
                //     $(this).children("p:nth-child(3)").text(activebox.team[index].job);
                //     $(this).children("p:nth-child(4)").text(activebox.team[index].detail);
                // })

                // $.each($("div.member"), function (index,value) {
                //     $(value).children("div:nth-child(1)").html(activebox.team[index].avatar);
                //     $(value).children("p:nth-child(2)").text(activebox.team[index].name);
                //     $(value).children("p:nth-child(3)").text(activebox.team[index].job);
                //     $(value).children("p:nth-child(4)").text(activebox.team[index].detail);
                // })

                var x = '', y = '', z = '';
                for(var i=0;i<activebox.function.length;i++){
                    x += '<div class="code">'
                        + '<div>' + activebox.function[i].logo + '</div>'
                        + '<p>' + activebox.function[i].title + '</p>'
                        + '<p>' + activebox.function[i].desc + '</p>'
                        +'</div>'
                }
                $("#function > .container").html(x);

                for(var i=0;i<activebox.project.length;i++){
                    y += '<div class="project-one"><div class="project-demo">'
                        + '<div class="project-img" style="background-image: url(' + activebox.project[i].img + ')">'
                        + '<div class="project-detail">'
                        + '<p>' + activebox.project[i].name + '</p>'
                        + '<p>' + activebox.project[i].designer + '</p>'
                        + '</div></div></div></div>'
                }
                $("#project").html(y);

                for(var i=0;i<activebox.team.length;i++){
                    z += '<div class="member">'
                        + '<div>' + activebox.team[i].avatar + '</div>'
                        + '<p>' + activebox.team[i].name + '</p>'
                        + '<p>' + activebox.team[i].job + '</p>'
                        + '<p>' + activebox.team[i].detail + '</p>'
                        +'</div>'
                }
                $("#team > .container").html(z);
                $(".thumbnail").css("background-image","url('" + activebox.popular[0].thumbnail + "')");
                $(".comment").children("p:nth-child(1)").text(activebox.popular[0].comment);
                $(".comment").children("p:nth-child(2)").text(activebox.popular[0].customer);
            }
        });
    }
    else{
        var activebox = JSON.parse(sessionStorage.getItem("activebox-string"));
        console.log(sessionStorage.getItem("activebox-string"));
        console.log(JSON.parse(sessionStorage.getItem("activebox-string")));
        // $.each($("div.member"),function (index,value) {
        //     var x = '<div>' + activebox.team[index].avatar + '</div>'
        //         + '<p>' + activebox.team[index].name + '</p>'
        //         + '<p>' + activebox.team[index].job + '</p>'
        //         + '<p>' + activebox.team[index].detail + '</p>'
        //     $(this).html(x)
        // })

        var x = '', y = '', z = '';
        for(var i=0;i<activebox.function.length;i++){
            x += '<div class="code">'
                + '<div>' + activebox.function[i].logo + '</div>'
                + '<p>' + activebox.function[i].title + '</p>'
                + '<p>' + activebox.function[i].desc + '</p>'
                +'</div>'
        }
        $("#function > .container").html(x);

        for(var i=0;i<activebox.project.length;i++){
            y += '<div class="project-one"><div class="project-demo">'
                + '<div class="project-img" style="background-image: url(' + activebox.project[i].img + ')">'
                + '<div class="project-detail">'
                + '<p>' + activebox.project[i].name + '</p>'
                + '<p>' + activebox.project[i].designer + '</p>'
                + '</div></div></div></div>'
        }
        $("#project").html(y);

        for(var i=0;i<activebox.team.length;i++){
            z += '<div class="member">'
                + '<div>' + activebox.team[i].avatar + '</div>'
                + '<p>' + activebox.team[i].name + '</p>'
                + '<p>' + activebox.team[i].job + '</p>'
                + '<p>' + activebox.team[i].detail + '</p>'
                +'</div>'
        }
        $("#team > .container").html(z);
        $(".thumbnail").css("background-image","url('" + activebox.popular[0].thumbnail + "')");
        $(".comment").children("p:nth-child(1)").text(activebox.popular[0].comment);
        $(".comment").children("p:nth-child(2)").text(activebox.popular[0].customer);
    }
})

var a = 0;
function set(x) {
    a = x;
    var activebox = JSON.parse(sessionStorage.getItem("activebox-string"));
    $(".thumbnail").css("background-image","url('" + activebox.popular[x].thumbnail + "')");
    $(".comment").children("p:nth-child(1)").text(activebox.popular[x].comment);
    $(".comment").children("p:nth-child(2)").text(activebox.popular[x].customer);
    $(".set:not(:nth-child(" + parseFloat(x + 1) + "))").css("background-color","#755d6e");
    $(".set:nth-child(" + parseFloat(x + 1) + ")").css("background-color","#ffffff");
}
var it = setInterval(function () {
    set(a%5);
    a++;
},2000);
