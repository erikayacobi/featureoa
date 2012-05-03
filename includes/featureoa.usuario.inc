<?php
function featureoa_form_usuario(&$form_state) {
  
   $form['numero_tarjeta'] = array(
    '#title' => t('Numero de tarjeta'),
    '#type' => 'textfield',
    '#default_value' => '',
      '#size' => 20,
        '#maxlength' => 20,
	);
   
  return $form;
}
  