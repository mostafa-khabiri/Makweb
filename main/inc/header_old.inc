<?php global $rayan_title; ?>
<!DOCTYPE html>
<html lang="fa">
<head>
    <!--BEGIN RAYCHAT CODE-->
    <script type="text/javascript">!function () {
            function t() {
                var t = document.createElement("script");
                t.type = "text/javascript", t.async = !0, localStorage.getItem("rayToken") ? t.src = "https://app.raychat.io/scripts/js/" + o + "?rid=" + localStorage.getItem("rayToken") + "&href=" + window.location.href : t.src = "https://app.raychat.io/scripts/js/" + o;
                var e = document.getElementsByTagName("script")[0];
                e.parentNode.insertBefore(t, e)
            }

            var e = document, a = window, o = "1e95e997-c53f-4270-a971-1cfa24f81e14";
            "complete" == e.readyState ? t() : a.attachEvent ? a.attachEvent("onload", t) : a.addEventListener("load", t, !1)
        }();</script>
    <!--END RAYCHAT CODE-->


    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
    <meta name="theme-color" content="<?= @$rayan_title['colorpage']; ?>">
    <meta name="keywords" content="<?= @$rayan_title['keywords']; ?>"/>
    <meta name="keywords_categoryusers" content="<?= @$rayan_title['keywords_categoryusers']; ?>"/>
    <meta name="description" content="<?= @$rayan_title['description']; ?>"/>
    <meta name="author" content="<?= @$rayan_title['author']; ?>"/>
    <meta name="copyright" content="<?= @$rayan_title['copyright']; ?>"/>
    <meta name="generator" content="<?= @$rayan_title['generator']; ?>"/>
    <!--Special SEO-->
    <meta name="keywords_Special" content="<?= @$rayan_title['keywords_Special']; ?>"/>
    <meta name="focus_keyword_Special" content="<?= @$rayan_title['focus_keyword_Special']; ?>"/>
    <meta name="seo_title_Special" content="<?= @$rayan_title['seo_title_Special']; ?>"/>
    <meta name="meta_description_Special" content="<?= @$rayan_title['meta_description_Special']; ?>"/>
    <meta name="meta_keyword_Special" content="<?= @$rayan_title['meta_keyword_Special']; ?>"/>
    <!--Special SEO-->
    <meta content="/template/main/img/i7.gif" property="og:image">
    <?php
    $fav = new html();
    $fav->favicon("/template/main/img/i7.gif");
    ?>
    <meta name="google-site-verification" content="<?= @$rayan_title['googlesiteverification']; ?>"/>
    <title><?= @$rayan_title['title']; ?></title>
    <link rel="stylesheet" href="template/main/css/bootstrap.css">
    <link rel="stylesheet" href="template/main/css/bootstrap-rtl.css">
    <link href="template/main/css/font-awesome.min.css" rel="stylesheet">
    <link href="template/main/css/all-font-awesome.css" rel="stylesheet">
    <link href="template/main/css/bootme.css" rel="stylesheet">
    <link href="template/main/css/bootstrap_blog.css" rel="stylesheet" type="text/css">


    <link rel="stylesheet" href="template/main/css/themes/default/default.css" type="text/css" media="screen"/>
    <link rel="stylesheet" href="template/main/css/nivo-slider.css" type="text/css" media="screen"/>


    <!--<link rel="stylesheet" href="template/main/css/datatable/jquery.dataTables.min.css">-->
    <link rel="stylesheet" href="template/main/css/datatable/dataTables.bootstrap.min.css" type="text/css">

    <link rel="stylesheet" href="https://cdn.datatables.net/buttons/1.2.2/css/buttons.bootstrap.min.css"
          type="text/css">
    <? /* if (http::_GET("model") == "users") { ?>
            <link href="template/main/css/bootstrap.min.css" type="text/css">
            <link href="template/main/css/dataTables.bootstrap.min.css" type="text/css">
        <? } */ ?>

    <!-- BootStrap Select -->
    <link href="template/main/css/bootstrap-select.css" media="all" rel="stylesheet" type="text/css"/>

    <!--  FileInput  -->
    <link href="template/main/css/fileinput.css" media="all" rel="stylesheet" type="text/css"/>
    <link href="template/main/themes/explorer-fas/theme.css" media="all" rel="stylesheet" type="text/css"/>
    <link href="template/main/jasny/css/jasny-bootstrap.min.css" media="all" rel="stylesheet" type="text/css"/>
    <!-- file uplload : -->

    <!--Form Wizard-->
    <link href="template/main/css/formwizard/jquery.stepy.css" media="all" rel="stylesheet" type="text/css"/>

    <!--DataTimePicker-->
    <link href="template/main/css/bootstrap-persiandatetimepicker.css" media="all" rel="stylesheet"
          type="text/css"/>

    <!-- Select Inputs -->
    <link href="template/main/css/bootstrap-tagsinput.css" media="all" rel="stylesheet" type="text/css"/>

    <!-- khabiri_header -->
    <link href="template/main/css/Khabiri_header.css" media="all" rel="stylesheet" type="text/css"/>
    <link href="template/main/css/navbar.css" media="all" rel="stylesheet" type="text/css"/>

    <!-- editor -->
    <link rel="stylesheet" href="template/main/editor/css/froala_editor.css">
    <link rel="stylesheet" href="template/main/editor/css/froala_style.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/char_counter.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/code_view.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/colors.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/draggable.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/emoticons.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/file.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/fullscreen.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/help.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/image.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/image_manager.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/line_breaker.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/quick_insert.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/table.css">
    <link rel="stylesheet" href="template/main/editor/css/plugins/video.css">

    <!-- map -->
    <link rel="stylesheet" href="template/main/css/leaflet.css" type="text/css">
    <link rel="stylesheet" href="template/main/css/leaflet-search.css">

    <!-- stars -->
    <link rel="stylesheet" href="template/main/css/stars.css" type="text/css">

    <!-- loding -->
    <link rel="stylesheet" href="template/main/css/loader-default.css" type="text/css">

    <!-- MY Style -->
    <link href="template/main/css/style.css" rel="stylesheet" type="text/css">

</head>
<body>

<header>

    <nav class="navbar navbar-inverse  navbar-custom">
        <div class="container-fluid">

            <div class="navbar-header">
                <button id="menu_button" type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNavbar"
                        style="z-index: 99;">
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </button>
                <!--<a class="navbar-brand" href="#">Makweb.ir</a>-->


            </div>
            <div class="collapse navbar-collapse" id="myNavbar">
                <ul id="menu" class="nav navbar-nav">
                    <?
                    if (isset($_GET['parameterstwo'])) {
                        khabiri_menu1(0);
                    } else if (isset($_GET['model']) and $_GET['model'] === 'special') {
                        khabiri_menu1(0);
                    } else {
                        khabiri_menu(0);
                    }
                    ?>
                </ul>
            </div>
        </div>
    </nav>

    <div id="khabiri_header" style="background-image: url(http://makweb.ir/<?= options::Find(false, array("img")) ?>)">
        <!--<div id="khabiri_header_top">

        </div>-->

        <div id="logo">
            <div id="login-register-navbar" class="navbar-brand pull-left">
                <span class="btn fa fa-sign-in fa-2x orange flasher" title="ورود / عضویت" type="button" data-toggle="dropdown"></span>
                <ul class="dropdown-menu" style="left: 30px;right: auto;top: 30px">
                    <li><a href="http://makweb.ir/users/register">عضویت (دریافت سایت اختصاصی)</a></li>
                    <li><a href="http://makweb.ir/users/login">ورود اعضاء (مدیریت سایت اختصاصی)</a></li>
                </ul>
            </div>
            <img id="makweb" src="template/main/img/khabiri_header/makweb_logo.png"
                 class="img-responsive">
            <!--<a
                    href="http://makweb.ir/users/register"><div style="font-size: 14px;right: 50px;margin-top: 120px;position: absolute;float: right;">
                <span class="fa fa-user-plus orange"></span>
                عضویت
                </div></a>
            <div style="font-size: 14px;left: 50px;margin-top: 120px;position: absolute;float: left;">
                <span class="fa fa-user-circle orange"></span>
                ورود
            </div>-->
        </div>

        <!--<div id="date"></div>-->

        <!--<div id="menu_top">-->

        <!--</div>-->
        <div id="top_ads">

            <div class="top_ads_container">

                <?
                if (isset($_GET['model']) and $_GET['model'] === 'special') {
                    ?>     <h5>
                        &#1587;&#1575;&#1605;&#1575;&#1606;&#1607; <?= categoryusers::Find(false, array("name"), array("id" => http::_GET("parameter")), ""); ?></h5>
                    <p><?= categoryusers::Find(false, array("content"), array("id" => http::_GET("parameter")), ""); ?></p>
                    <?
                } else if (empty($_GET['parameters'])) { ?>
                    <? $i = 0;
                    foreach (headermakweb::Find(true, "", "", " order by id asc") as $record) {
                        if ($i == 0) {
                            printf("<h5><i style='color:#f4861e;font-size:small' class='%s'></i> %s </h5>", $record['icon'], $record['name']);
                        } else {
                            printf("<p><i style='color: #f4861e' class='%s'></i> %s </p>", $record['icon'], $record['name']);
                        }
                        $i++;
                    } ?>
                <? } elseif (isset($_GET['parameters']) and empty($_GET['parameterstwo']) and $_GET['model'] === "categoryusers") { ?>
                    <h5> &#1607;&#1604;&#1583;&#1740;&#1606;&#1711;<BR><?= http::_GET("parameters"); ?></h5>

                <? } else if ($_GET['model'] === "categoryusers") { ?>
                    <h5> &#1587;&#1575;&#1605;&#1575;&#1606;&#1607; <?= http::_GET("parameters"); ?></h5>
                    <p><?= categoryusers::Find(false, array("content"), array("url" => str_replace(" ", "-", http::_GET("parameters")))); ?></p>

                <? } ?>

            </div>

        </div>
        <div id="khabiri_header_bottom">

            <div id="category_menu">
                <nav>
                    <ul class="pull-left">
                        <li style="line-height: 0px;margin-top: 3px;"><a
                                    href="http://makweb.ir/users/register" class="">
                                <div class="count" style="font-size: 14px;">
                                    <span class="fa fa-user-plus orange"></span>
                                    عضویت (دریافت سایت اختصاصی)

                                </div>
                            </a>
                        </li>
                        <li style="line-height: 0px;margin-top: 3px;"><a
                                    href="http://makweb.ir/users/login" class="">
                                <div class="count" style="font-size: 14px;">
                                    <span class="fa fa-user-circle orange"></span>
                                    ورود اعضاء (مدیریت سایت اختصاصی)

                                </div>
                            </a>
                        </li>
                        <!--<li id="search">
                            <form method="get" action="http://www.google.com/search">
                                <input type="text" name="q" size="31" maxlength="255" value="">
                                <input type="hidden" name="sitesearch" value="makweb.ir">
                            </form>
                        </li>-->
                    </ul>
                </nav>
            </div>


        </div>

    </div> <!--header end-->

    <!--<nav class="navbar navbar-inverse  navbar-custom">
        <div class="container-fluid">
            <div class="navbar-header">
                <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNavbar">
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </button>
                <!--<a class="navbar-brand" href="#">Makweb.ir</a>-->
    <!--</div>
    <div class="collapse navbar-collapse" id="myNavbar">
        <ul class="nav navbar-nav">
            <li><a href="#">صفحه اصلی</a></li>
            <li class="dropdown">
                <a class="dropdown-toggle" data-toggle="dropdown" href="#">صفحه 1 <span
                            class="caret"></span></a>
                <ul class="dropdown-menu">
                    <li><a href="#">صفحه 1-1</a></li>
                    <li><a href="#">صفحه 1-2</a></li>
                    <li><a href="#">صفحه 1-3</a></li>
                </ul>
            </li>
            <li><a href="#">صفحه 2</a></li>
            <li><a href="#">صفحه 3</a></li>
        </ul>
        <ul class="nav navbar-nav navbar-right">
            <li><a href="#"><span class="fa fa-user"></span> عضویت</a></li>
            <li><a href="#"><span class="fa fa-log-in"></span> ورود</a></li>
        </ul>
    </div>
</div>
</nav>-->

</header>
<div class="loader loader-default is-active"></div>
<!--
<header class="h-left">
    <div class="top-head"></div>
    <div class="hihead"></div>
    <div class="container">
        <div class="row">
            <nav class="navbar-default">
                <!-- Brand and toggle get grouped for better mobile display -->
<!--<div class="navbar-header">
    <button aria-expanded="false" data-target="#bs-example-navbar-collapse-1" data-toggle="collapse"
            class="navbar-toggle collapsed" type="button">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
    </button>
</div>


<!-- Collect the nav links, forms, and other content for toggling -->
<!-- <div aria-expanded="false" id="bs-example-navbar-collapse-1" class="navbar-collapse collapse">
                    <ul class="nav navbar-nav">
                        <?
if (isset($_GET['parameterstwo'])) {
    khabiri_menu1(0);
} else if (isset($_GET['model']) and $_GET['model'] === 'special') {
    khabiri_menu1(0);
} else {
    khabiri_menu(0);
}
?>
                    </ul>
                </div><!-- /.navbar-collapse -->
<!--</nav>

<div class="col-lg-2">
    <div class="logo"><img src="template/main/img/logo2.png" class="img-responsive"></div>
</div>
<div class="col-lg-10" style="z-index: 9">

</div>
</div>
</div>

<div class="container">
<div class="col-lg-12 col-md-12 col-sm-12 col-xs-12   top-head-detail">
<div class="col-lg-2"></div>
<div class="col-lg-2">
    <div class="panel panel-default">
        <div class="row">
            <a href="http://makweb.ir/guidance/عضویت-در-سامانه-سایت-اختصاصی" class="">
                <!--<div class="symbol terques">
                    <i class="fa fa-check-circle"></i>
                </div>-->
<!-- <div class="value">
     <h3 class="count" style="font-size: 12px">
         <li class="fa fa-user-circle fa-2x orange"></li>
         عضویت در سامانه (سایت اختصاصی)
     </h3>
 </div>
</a>
</div>
<div class="row">
<a href="http://makweb.ir/guidance/ورود-اعضاء-مدیریت-سایت-اعضاء" class="">
 <!--<div class="symbol terques">
     <i class="fa fa-check-circle"></i>
 </div>-->
<!-- <div class="value">
                                <h3 class="count" style="font-size: 12px">
                                    <li class="fa fa-lock fa-2x blue"></li>
                                    ورود اعضاء (مدیریت سایت اعضاء)
                                </h3>
                            </div>
                        </a>
                    </div>
                </div>
            </div>
            <div class="col-lg-8">
                <?
if (isset($_GET['model']) and $_GET['model'] === 'special') {
    ?>     <h5>
                        &#1587;&#1575;&#1605;&#1575;&#1606;&#1607; <?= categoryusers::Find(false, array("name"), array("id" => http::_GET("parameter")), ""); ?></h5>
                    <p><?= categoryusers::Find(false, array("content"), array("id" => http::_GET("parameter")), ""); ?></p>
                    <?
} else if (empty($_GET['parameters'])) { ?>
                    <? $i = 0;
    foreach (headermakweb::Find(true, "", "", " order by id asc") as $record) {
        if ($i == 0) {
            printf("<h5><i style='color:black;font-size:small' class='%s'></i> %s </h5>", $record['icon'], $record['name']);
        } else {
            printf("<p><i style='color: #f4861e' class='%s'></i> %s </p>", $record['icon'], $record['name']);
        }
        $i++;
    } ?>
                <? } elseif (isset($_GET['parameters']) and empty($_GET['parameterstwo']) and $_GET['model'] === "categoryusers") { ?>
                    <h5> &#1607;&#1604;&#1583;&#1740;&#1606;&#1711;<BR><?= http::_GET("parameters"); ?></h5>

                <? } else if ($_GET['model'] === "categoryusers") { ?>
                    <h5> &#1587;&#1575;&#1605;&#1575;&#1606;&#1607; <?= http::_GET("parameters"); ?></h5>
                    <p><?= categoryusers::Find(false, array("content"), array("url" => str_replace(" ", "-", http::_GET("parameters")))); ?></p>

                <? } ?>
            </div>

        </div>
    </div>
</header>
-->

<?php

function view($parent = 0)
{
    global $db;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "top"), "order by rang asc")->results() as $record) {

        if ($record['module'] == "public") {

            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $record['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li><a >' . $record['name'] . '</a>';
            print '<ul  >';
            category($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li><a    ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="page/' . $page['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="news/' . $page['url'] . '" >' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "top"))->results()) {
            print '<ul  >';
            view($record['id']);
            print '</ul>';
        }
        print '</li>';
    }


}

function khabiri_menu($parent = 0)
{
    global $db;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "top"), "order by rang asc")->results() as $record) {

        if ($record['module'] == "public") {

            print '<li ' . ("" . $record['url'] == "#" ? 'class="dropdown-submenu"' : '') . '><a  ' . ("" . $record['url'] == "#" ? 'class="dropdown-toggle" data-toggle="dropdown"' : '') . ("" . $_GET['model'] === $record['url'] ? 'class=""' : '') . '  href="' . $record['url'] . '"  style="z-index: 99">' . $record['name'] . ("" . $record['url'] == "#" ? '<span class="caret"></span>' : '') . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li><a  class="dropdown-toggle" data-toggle="dropdown" href="#">' . $record['name'] . '<span class="caret"></span></a>';
            print '<ul class="dropdown-menu">';
            category($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li  class="dropdown"><a    ' . ("" . $_GET['model'] === $record['url'] ? 'class=""' : '') . ' href="page/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class=""' : '') . ' href="news/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "top"))->results()) {
            print '<ul class="dropdown-menu">';
            khabiri_menu($record['id']);
            print '</ul>';
        }
        print '</li>';
    }


}

function khabiri_menu1($parent = 0)
{
    global $db;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "top1"), "order by rang asc")->results() as $record) {

        if ($record['module'] == "public") {

            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class=""' : '') . '  href="' . $record['url'] . '"  style="z-index: 99">' . $record['name'] . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li class="dropdown"><a  class="dropdown-toggle" data-toggle="dropdown" href="#">' . $record['name'] . '<span class="caret"></span></a>';
            print '<ul class="dropdown-menu">';
            category1($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class=""' : '') . ' href="page/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class=""' : '') . ' href="news/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "top1"))->results()) {
            print '<ul class="dropdown-menu">';
            khabiri_menu1($record['id']);
            print '</ul>';
        }
        print '</li>';
    }


}

function category($parent = 0, $url = 'blog/category')
{
    global $db;

    foreach ($db->select('rayan_category_post', '', array('parent_id' => $parent, "position" => "top"))->results() as $record) {

        print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $url . '/' . $record['url'] . '" >' . $record['name'] . '</a>';
        if ($db->select('rayan_category_post', '', array('parent_id' => $record['id'], "position" => "top"))->results()) {
            print '<ul  >';
            view($record['id'], $url . '/' . $record['url']);
            print '</ul>';
        }
        print '</li>';
    }


}

function view1($parent = 0)
{
    global $db;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "top1"), "order by rang asc")->results() as $record) {

        if ($record['module'] == "public") {

            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $record['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li><a >' . $record['name'] . '</a>';
            print '<ul  >';
            category1($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="page/' . $page['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="news/' . $page['url'] . '" >' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "top1"))->results()) {
            print '<ul  >';
            view1($record['id']);
            print '</ul>';
        }
        print '</li>';
    }


}

function category1($parent = 0, $url = 'blog/category')
{
    global $db;

    foreach ($db->select('rayan_category_post', '', array('parent_id' => $parent, "position" => "top1"))->results() as $record) {

        print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $url . '/' . $record['url'] . '" >' . $record['name'] . '</a>';
        if ($db->select('rayan_category_post', '', array('parent_id' => $record['id'], "position" => "top1"))->results()) {
            print '<ul  >';
            view1($record['id'], $url . '/' . $record['url']);
            print '</ul>';
        }
        print '</li>';
    }


}

?>
