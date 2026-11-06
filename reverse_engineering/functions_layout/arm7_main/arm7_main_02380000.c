
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK _start [structural] reset entry from ROM header; disables IME first like NitroSDK crt0 */

void _start(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"IRQ":1} io=["027ffa80","04000208"] */
  _DAT_04000208 = 0x4000000;
  for (puVar4 = (undefined4 *)0x3800000; (int)puVar4 < 0x380ff00; puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar4 = (undefined4 *)&DAT_023fe940;
  puVar2 = (undefined4 *)&DAT_027ffa80;
  do {
    puVar1 = puVar2;
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar1 + 1;
  } while ((int)(puVar1 + -0x9ffef7) < 0);
  puVar4 = (undefined4 *)&DAT_023fe904;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar3;
  } while ((int)puVar3 - (int)(puVar1 + 9) < 0);
  do_autoload();
  for (puVar4 = (undefined4 *)&DAT_023801b0; puVar4 < &DAT_023801b0; puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  FUN_0238015c();
  _DAT_0380fffc = OS_IrqHandler;
  NitroSpMain();
  return;
}

