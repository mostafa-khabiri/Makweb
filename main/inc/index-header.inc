<?php
/**
 * Created by PhpStorm.
 * User: MOSTAFA
 * Date: 5/13/2020
 * Time: 1:13 AM
 */
?>
    <div id="first-menu">
        <div class="container-fluid">
            <div class="container">
                <nav id="top-menu" class="navbar navbar-toggleable-sm navbar-light">
                    <a class="navbar-brand" href="<?= BASE_URL ?>">
                        <img class="d-md-block d-sm-none d-none" src="newTemplate/main/img/logo.png" alt="logo">
                        <img class="d-md-none d-sm-block d-block" src="newTemplate/main/img/Logo-2.png" alt="logo">
                    </a>
                    <ul class="navbar-nav mr-auto">
                        <li class="nav-item mt-md-0 mt-1">
                            <a class="nav-link" href="<?= BASE_URL ?>users/register"">
                            عضویت
                            </a>
                        </li>
                        <li class="nav-item mt-md-0 mt-1">
                            <a class="nav-link" href="<?= BASE_URL ?>users/login"">
                            ورود اعضاء
                            </a>
                        </li>
                    </ul>
                    <form class="d-lg-flex d-md-none d-sm-none d-none">
                        <input type="text" class="form-control" id="input_desktop" placeholder="در جستجوی چه هستید؟"
                               onkeyup="search(this.value);">
                        <button id="btnSearch" type="button" class="btn" data-toggle="dropdown">
                            <img src="newTemplate/main/img/icons-Magnifier.svg" alt="search">
                        </button>
                        <ul class="dropdown-menu dropdown" id="searchUL"></ul>
                    </form>

                </nav>
            </div>
        </div>
    </div>

    <div id="second-menu">
        <div class="container-fluid">
            <div class="container">
                <nav class="navbar navbar-toggleable-md">
                    <button class="navbar-toggler navbar-light navbar-toggler-right" type="button"
                            data-toggle="collapse"
                            data-target="#navbarText" aria-controls="navbarText" aria-expanded="false"
                            aria-label="Toggle navigation">
                        <span class="navbar-toggler-icon"></span>
                    </button>
                    <div class="d-lg-flex w-100 d-sm-none d-none">
                        <ul class="navbar-nav" id="main-menu">
                            <li class="nav-item">
                                <a class="nav-link" href="<?= BASE_URL ?>">
                                    <svg class="icons home" x="0px" y="0px" viewBox="0 0 512 512">
                                        <g>
                                            <polygon
                                                    points="256,152.96 79.894,288.469 79.894,470.018 221.401,470.018 221.401,336.973 296.576,336.973 296.576,470.018 432.107,470.018 432.107,288.469"/>
                                        </g>
                                        <g>
                                            <polygon
                                                    points="439.482,183.132 439.482,90.307 365.316,90.307 365.316,126.077 256,41.982 0,238.919 35.339,284.855 256,115.062 476.662,284.856 512,238.92"/>
                                        </g>
                                    </svg>
                                </a>
                            </li>
                            <?php
                            if (isset($_GET['parameterstwo'])) {
                                khabiri_menu1(0);
                            } else if (isset($_GET['model']) and $_GET['model'] === 'special') {
                                khabiri_menu1(0);
                            } else {
                                khabiri_menu(0);
                            }
                            ?>
                            <li id="extra-menu" class="nav-item dropdown">
                                <a class="nav-link dropdown-toggle" href="javascript:void(0);"
                                   id="navbarDropdownServices"
                                   data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                                    <svg class="icons more" viewBox="0 0 34 10">
                                        <path id="svg_icon_-_More" data-name="svg icon - More" class="cls-1"
                                              d="M417,133a5,5,0,1,1,5-5A5,5,0,0,1,417,133Zm-12,0a5,5,0,1,1,5-5A5,5,0,0,1,405,133Zm-12,0a5,5,0,1,1,5-5A5,5,0,0,1,393,133Z"
                                              transform="translate(-388 -123)"/>
                                    </svg>
                                </a>
                                <div id="sub-menu" class="dropdown-menu" aria-labelledby="navbarDropdownServices">
                                </div>
                            </li>
                        </ul>
                    </div>

                    <form class="mr-auto d-lg-none">
                        <input type="text" class="form-control" id="input_mobile" placeholder="در جستجوی چه هستید؟"
                               onkeyup="search(this.value);">
                        <button type="button" class="btn" data-toggle="dropdown">
                            <img src="newTemplate/main/img/icons-Magnifier.svg" alt="search">
                        </button>
                        <ul class="dropdown-menu dropdown" id="searchULMobile"></ul>
                    </form>
                </nav>

                <div class="collapse navbar-collapse" id="navbarText">
                    <ul class="navbar-nav">
                        <?php
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
        </div>
    </div>

<?php
function khabiri_menu($parent = 0)
{
    global $db;

    $i = 0;
    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "top"), "order by rang asc")->results() as $record) {
        if ($record['module'] == "public") {

            print '<li class="nav-item"' . ("" . $record['url'] == "#" ? 'class="dropdown-submenu"' : '') . '><a  ' . ("" . $record['url'] == "#" ? 'class="dropdown-toggle" data-toggle="dropdown"' : 'class="nav-link"') . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : 'class="nav-link"') . '  href="' . $record['url'] . '"  style="z-index: 99">' . $record['name'] . ("" . $record['url'] == "#" ? '<span class="caret"></span>' : '') . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li class="nav-item"><a  class="dropdown-toggle" data-toggle="dropdown" href="#">' . $record['name'] . '<span class="caret"></span></a>';
            print '<ul class="navbar-nav">';
            category($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li  class="nav-item"><a    ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : 'class="nav-link"') . ' href="page/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li class="nav-item"><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : 'class="nav-link"') . ' href="news/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "top"))->results()) {
            print '<ul class="navbar-nav">';
            khabiri_menu($record['id']);
            print '</ul>';
        }
        print '</li>';
        $i++;
    }
}

function khabiri_menu1($parent = 0)
{
    global $db;
    $i = 0;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "top1"), "order by rang asc")->results() as $record) {
        if ($record['module'] == "public") {

            print '<li class="nav-item"><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : 'class="nav-link"') . '  href="' . $record['url'] . '"  style="z-index: 99">' . $record['name'] . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li class="nav-item"><a  class="dropdown-toggle" data-toggle="dropdown" href="#">' . $record['name'] . '<span class="caret"></span></a>';
            print '<ul class="navbar-nav">';
            category1($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li class="nav-item"><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : 'class="nav-link"') . ' href="page/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li class="nav-item"><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : 'class="nav-link"') . ' href="news/' . $page['url'] . '"   style="z-index: 99">' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "top1"))->results()) {
            print '<ul class="navbar-nav">';
            khabiri_menu1($record['id']);
            print '</ul>';
        }
        print '</li>';
        $i++;
    }
}

function category($parent = 0, $url = 'blog/category')
{
    global $db;

    foreach ($db->select('rayan_category_post', '', array('parent_id' => $parent, "position" => "top"))->results() as $record) {

        print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : '') . '  href="' . $url . '/' . $record['url'] . '" >' . $record['name'] . '</a>';
        if ($db->select('rayan_category_post', '', array('parent_id' => $record['id'], "position" => "top"))->results()) {
            print '<ul  >';
            khabiri_menu($record['id'], $url . '/' . $record['url']);
            print '</ul>';
        }
        print '</li>';
    }


}

function category1($parent = 0, $url = 'blog/category')
{
    global $db;

    foreach ($db->select('rayan_category_post', '', array('parent_id' => $parent, "position" => "top1"))->results() as $record) {

        print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="nav-link"' : '') . '  href="' . $url . '/' . $record['url'] . '" >' . $record['name'] . '</a>';
        if ($db->select('rayan_category_post', '', array('parent_id' => $record['id'], "position" => "top1"))->results()) {
            print '<ul  >';
            khabiri_menu1($record['id'], $url . '/' . $record['url']);
            print '</ul>';
        }
        print '</li>';
    }


}

?>