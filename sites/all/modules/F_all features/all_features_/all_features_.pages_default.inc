<?php
/**
 * @file
 * all_features_.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function all_features__default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'action';
  $page->task = 'page';
  $page->admin_title = 'Action';
  $page->admin_description = '';
  $page->path = 'action';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Action',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_action__panel';
  $handler->task = 'page';
  $handler->subtask = 'action';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome to todays Actions';
  $display->uuid = '49ea4f05-a51d-41ea-bcc7-abff94d5bdbf';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_action__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0fe7ffd4-71b5-427c-b72e-a6d0ada7bc67';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'views-cyber_monday_discount_-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0fe7ffd4-71b5-427c-b72e-a6d0ada7bc67';
  $display->content['new-0fe7ffd4-71b5-427c-b72e-a6d0ada7bc67'] = $pane;
  $display->panels['bottom'][0] = 'new-0fe7ffd4-71b5-427c-b72e-a6d0ada7bc67';
  $pane = new stdClass();
  $pane->pid = 'new-7f1ef4ad-83cf-4f6e-b41e-2788c40f60c3';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views-all_authors_-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f1ef4ad-83cf-4f6e-b41e-2788c40f60c3';
  $display->content['new-7f1ef4ad-83cf-4f6e-b41e-2788c40f60c3'] = $pane;
  $display->panels['left'][0] = 'new-7f1ef4ad-83cf-4f6e-b41e-2788c40f60c3';
  $pane = new stdClass();
  $pane->pid = 'new-cfb3b69f-3deb-4f9e-9a8f-f247b677a487';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-products_list1-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cfb3b69f-3deb-4f9e-9a8f-f247b677a487';
  $display->content['new-cfb3b69f-3deb-4f9e-9a8f-f247b677a487'] = $pane;
  $display->panels['right'][0] = 'new-cfb3b69f-3deb-4f9e-9a8f-f247b677a487';
  $pane = new stdClass();
  $pane->pid = 'new-1ce89429-1240-488f-96bf-0ecef6c8b055';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'views-front_page_slideshow1-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1ce89429-1240-488f-96bf-0ecef6c8b055';
  $display->content['new-1ce89429-1240-488f-96bf-0ecef6c8b055'] = $pane;
  $display->panels['top'][0] = 'new-1ce89429-1240-488f-96bf-0ecef6c8b055';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1ce89429-1240-488f-96bf-0ecef6c8b055';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['action'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_panel_page';
  $page->task = 'page';
  $page->admin_title = 'My Panel Page';
  $page->admin_description = 'Moja panel stranica';
  $page->path = 'panel-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Panel page',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_panel_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'my_panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'right' => array(
        'corner_location' => 'pane',
      ),
      'bottom' => array(
        'corner_location' => 'pane',
      ),
      'top' => NULL,
      'left' => NULL,
    ),
    'left' => array(
      'style' => 'naked',
    ),
    'top' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'rounded_corners',
    ),
    'bottom' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = 'MicroTech';
  $display->uuid = '7b8d9fd7-8ad8-4ed7-b7cb-af1bbaa3dc03';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_my_panel_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5a2d7eda-e38f-489f-b678-34d976c2f806';
  $pane->panel = 'left';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a2d7eda-e38f-489f-b678-34d976c2f806';
  $display->content['new-5a2d7eda-e38f-489f-b678-34d976c2f806'] = $pane;
  $display->panels['left'][0] = 'new-5a2d7eda-e38f-489f-b678-34d976c2f806';
  $pane = new stdClass();
  $pane->pid = 'new-c701e7ca-2a6e-4cbe-a446-8e12e66f2d0b';
  $pane->panel = 'right';
  $pane->type = 'search_form';
  $pane->subtype = 'search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'node',
    'form' => 'advanced',
    'path_type' => 'default',
    'path' => '',
    'override_prompt' => 0,
    'prompt' => '',
    'context' => 'empty',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c701e7ca-2a6e-4cbe-a446-8e12e66f2d0b';
  $display->content['new-c701e7ca-2a6e-4cbe-a446-8e12e66f2d0b'] = $pane;
  $display->panels['right'][0] = 'new-c701e7ca-2a6e-4cbe-a446-8e12e66f2d0b';
  $pane = new stdClass();
  $pane->pid = 'new-d4917656-994f-4a4c-82ac-f038f23cb6aa';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'About us',
    'body' => 'Upuststvo za Narucivanje

Količina

U ovom koraku ćete se odlučiti za količinu izabranog proizvoda.

    Proizvod za koji ste se odlučili.
    Količina proizvoda koji naručujete. Klikom na plus ili minus možete dodavati ili smanjivati količinu proizvoda u korpi.
    Naziv proizvoda za koji ste se odlučili.
    Klikom na ovo dugme možete odustati od kupovine ili ukloniti ovaj proizvod iz korpe.
    Jedinična cena proizvoda.
    Ukupna cena.
    Ukupni iznos kupovine obuhvatajući iznos trenutne kupovine i iznos kupovine prethodno izabranih uređaja.
    U ovom koraku možete odlučiti da li i koliko bodova ćete koristiti prilikom ove kupovine.
    Unesite promotivni kod ukoliko želite da ga iskoristite prilikom ove kupovine.
    Označite da li želite da koristite promotivni kod klikom na kvadrat sa leve strane.
    Klikom na SLEDEĆA nastavljate proces kupovine, klikom na opciju PRETHODNA se vraćate na prethodnu stranu.

Dostava


    Vršimo isporuku od vrata do vrata za sve porudžbine na teritoriji Srbije u saradnji sa kurirskom službom D Express. Ukoliko porudžbina prelazi iznos od 3.000 dinara, usluga se ne naplaćuje.
    Vršimo isporuke na adrese svih pravnih lica na teritoriji Srbije. Ova usluga je besplatna i za nju ne postoje nikakva ograničenja.

Isporuka porudžbina čija je vrednost niža od navedenog iznosa biće naplaćena po važećem cenovniku kurirske službe D Express koje zajedno sa uslovima možete pogledati na sledećem linku: www.dailyexpress.rs Roba naručena do 15h svakog radnog dana, biće dostavljena najkasnije u roku od 2 (dva) radna dana na adresu kupca.

Dragi kupci,

Ukoliko ste korisnici usluge “5 godina sigurnosti” za laptopove, svoje uređaje nastavite da donosite u naše maloprodajne objekte ili na adresu System One, ul. Omladinskih brigada 102., 11070 Novi Beograd.  
Kontakt telefon 011/414-0620,  011/7131-010.
Potrebno je da ponesete Original Sertifikat, Ugovor o prodaji i fiskalni račun.
Moguće je da svoj uređaj pošaljete kurirskom službom na redovni godišnji servis i isti da vam bude vraćen kurirskom službom na kućnu adresu. Sve troškove kurirske službe u ovom slučaju snosite vi.



Hvala na razumevanju.
Vaš Micro Tech
',
    'format' => 'filtered_html',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd4917656-994f-4a4c-82ac-f038f23cb6aa';
  $display->content['new-d4917656-994f-4a4c-82ac-f038f23cb6aa'] = $pane;
  $display->panels['top'][0] = 'new-d4917656-994f-4a4c-82ac-f038f23cb6aa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5a2d7eda-e38f-489f-b678-34d976c2f806';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_panel_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panel_page';
  $page->task = 'page';
  $page->admin_title = 'Panel Page';
  $page->admin_description = '';
  $page->path = 'panel';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panel_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'acdafd23-c06b-44c2-b6c1-96884a961e7e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_panel_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-067d89fb-8e00-458a-bfda-f6ea03c0699c';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'views-blog-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '067d89fb-8e00-458a-bfda-f6ea03c0699c';
  $display->content['new-067d89fb-8e00-458a-bfda-f6ea03c0699c'] = $pane;
  $display->panels['bottom'][0] = 'new-067d89fb-8e00-458a-bfda-f6ea03c0699c';
  $pane = new stdClass();
  $pane->pid = 'new-02b19a6f-e1bb-4593-bd19-44cf479ff0c9';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views-recenzija1-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '02b19a6f-e1bb-4593-bd19-44cf479ff0c9';
  $display->content['new-02b19a6f-e1bb-4593-bd19-44cf479ff0c9'] = $pane;
  $display->panels['left'][0] = 'new-02b19a6f-e1bb-4593-bd19-44cf479ff0c9';
  $pane = new stdClass();
  $pane->pid = 'new-00c3bdd7-309c-48b1-b493-3aea027c90dc';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-product_display_1-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00c3bdd7-309c-48b1-b493-3aea027c90dc';
  $display->content['new-00c3bdd7-309c-48b1-b493-3aea027c90dc'] = $pane;
  $display->panels['right'][0] = 'new-00c3bdd7-309c-48b1-b493-3aea027c90dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-02b19a6f-e1bb-4593-bd19-44cf479ff0c9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panel_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'shop_items';
  $page->task = 'page';
  $page->admin_title = 'Shop Items';
  $page->admin_description = '';
  $page->path = 'all-shop-items';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Shop items',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'tab',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_shop_items__panel';
  $handler->task = 'page';
  $handler->subtask = 'shop_items';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'All Products';
  $display->uuid = '6afbe5c7-e8dc-4898-bffa-a8e4ff76b71d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_shop_items__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9063e3f7-3a10-4f0f-898f-b579dbadc03b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-shop_items1-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9063e3f7-3a10-4f0f-898f-b579dbadc03b';
  $display->content['new-9063e3f7-3a10-4f0f-898f-b579dbadc03b'] = $pane;
  $display->panels['middle'][0] = 'new-9063e3f7-3a10-4f0f-898f-b579dbadc03b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['shop_items'] = $page;

  return $pages;

}
