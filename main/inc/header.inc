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

    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <!--[if IE]>
    <meta http-equiv=X-UA-Compatible content="IE=edge"><![endif]-->
    <title><?= @$rayan_title['title']; ?></title>
    <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
    <meta name="robots" content="index, follow"/>
    <meta content="newTemplate/main/img/favIcon.gif" property="og:image">
    <?php
    $fav = new html();
    $fav->favicon("newTemplate/main/img/favIcon.gif");
    ?>
    <meta name="msapplication-config" content="msapp-config.xml"/>

    <meta name="author" content="<?= @$rayan_title['author']; ?>"/>
    <meta name="copyright" content="<?= @$rayan_title['copyright']; ?>"/>
    <meta name="generator" content="<?= @$rayan_title['generator']; ?>"/>
    <link rel="canonical" href="<?= BASE_URL ?>">
    <meta name="theme-color" content="<?= @$rayan_title['colorpage']; ?>">
    <meta name="description" content="<?= @$rayan_title['description']; ?>"/>
    <meta name="keywords" content="<?= @$rayan_title['keywords']; ?>"/>

    <!--Special SEO-->
    <meta name="keywords_categoryusers" content="<?= @$rayan_title['keywords_categoryusers']; ?>"/>
    <meta name="keywords_Special" content="<?= @$rayan_title['keywords_Special']; ?>"/>
    <meta name="focus_keyword_Special" content="<?= @$rayan_title['focus_keyword_Special']; ?>"/>
    <meta name="seo_title_Special" content="<?= @$rayan_title['seo_title_Special']; ?>"/>
    <meta name="meta_description_Special" content="<?= @$rayan_title['meta_description_Special']; ?>"/>
    <meta name="meta_keyword_Special" content="<?= @$rayan_title['meta_keyword_Special']; ?>"/>
    <!--Special SEO-->

    <meta property="og:locale" content="fa_IR">
    <meta property="og:type" content="website">
    <meta property="og:title" content="<?= @$rayan_title['title']; ?>">
    <meta property="og:description" content="<?= @$rayan_title['description']; ?>">
    <meta property="og:url" content="<?= BASE_URL ?>">
    <meta property="og:site_name" content="makweb">
    <meta property="og:image" content="newTemplate/main/img/logo.png">

    <meta name="twitter:card" content="summary">
    <meta name="twitter:site" content="@makweb">
    <meta name="twitter:title" content="<?= @$rayan_title['title']; ?>">
    <meta name="twitter:description" content="<?= @$rayan_title['description']; ?>">
    <meta name="twitter:image" content="newTemplate/main/img/logo.png">
    <meta name="google-site-verification" content="<?= @$rayan_title['googlesiteverification']; ?>"/>
    <meta name="mobile-web-app-capable" content="yes">


    <!--================================================================ New ===============================-->
    <link rel="stylesheet" href="newTemplate/main/css/bootstrap.css">
    <link rel="stylesheet" href="newTemplate/main/css/bootstrap-reboot.css">
    <link rel="stylesheet" href="newTemplate/main/css/bootstrap-grid.css">
    <link rel="stylesheet" href="newTemplate/main/css/jquery.dataTables.min.css">
    <link rel="stylesheet" href="newTemplate/main/css/slick-theme.css">
    <link rel="stylesheet" href="newTemplate/main/css/slick.css">
    <link rel="stylesheet" href="newTemplate/main/css/font-awesome.min.css">
    <link rel="stylesheet" href="newTemplate/main/css/all-font-awesome.css">
    <link rel="stylesheet" href="newTemplate/main/css/fontiran.css">
    <link rel="stylesheet" href="newTemplate/main/css/jquery.steps.css">
    <link rel="stylesheet" href="newTemplate/main/css/index.css">

    <!--[if It IE9]
        <script src="http://html5shiv.googlecode.com/svn/trunk/html5.js""type="text/javascript" charset="utf-8"></script>
    <![endif]-->

    <?php
    if(http::_GET("model") == "users"){
       ?>
        <link href="template/main/css/bootstrap-rtl.css" rel="stylesheet">
        <link href="template/main/css/bootme.css" rel="stylesheet">
        <link href="template/main/css/bootstrap_blog.css" rel="stylesheet" type="text/css">


        <link rel="stylesheet" href="template/main/css/themes/default/default.css" type="text/css" media="screen"/>
        <link rel="stylesheet" href="template/main/css/nivo-slider.css" type="text/css" media="screen"/>


        <!--<link rel="stylesheet" href="template/main/css/datatable/jquery.dataTables.min.css">-->
        <link rel="stylesheet" href="template/main/css/datatable/dataTables.bootstrap.min.css" type="text/css">

        <link rel="stylesheet" href="https://cdn.datatables.net/buttons/1.2.2/css/buttons.bootstrap.min.css"
              type="text/css">

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
    <?php
    }
    ?>
</head>

<body>

