
/* JUS-SDK __call_static_initializers [structural] crt0 call #7 of 7 in NitroSDK order */

void __call_static_initializers(code *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_02092eb0;
  while( true ) {
    if (puVar1 != (undefined4 *)0x0) {
      param_1 = (code *)*puVar1;
    }
    if (puVar1 == (undefined4 *)0x0 || param_1 == (code *)0x0) break;
    param_1 = (code *)(*param_1)();
    puVar1 = puVar1 + 1;
  }
  return;
}

