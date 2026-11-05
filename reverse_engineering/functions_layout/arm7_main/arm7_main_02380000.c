
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK _start [structural] reset entry from ROM header; disables IME first like NitroSDK crt0 */

void _start(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"IRQ":1} io=["027ffa80","04000208"] */
  _DAT_04000208 = 0x4000000;
  for (puVar6 = (undefined4 *)0x3800000; (int)puVar6 < 0x380ff00; puVar6 = puVar6 + 1) {
    *puVar6 = 0;
  }
  puVar6 = (undefined4 *)&DAT_023fe940;
  puVar4 = (undefined4 *)&DAT_027ffa80;
  do {
    puVar3 = puVar4;
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar4 = puVar3 + 1;
  } while ((int)(puVar3 + -0x9ffef7) < 0);
  puVar6 = (undefined4 *)&DAT_023fe904;
  do {
    puVar5 = puVar4 + 1;
    *puVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar4 = puVar5;
  } while ((int)puVar5 - (int)(puVar3 + 9) < 0);
  do_autoload();
  for (puVar6 = (undefined4 *)&DAT_023801b0; puVar6 < &DAT_023801b0; puVar6 = puVar6 + 1) {
    *puVar6 = 0;
  }
  FUN_0238015c();
  _DAT_0380fffc = OS_IrqHandler;
  uRam0380fb78 = 0xffff0000;
  FUN_037fcecc();
  FUN_037fc77c();
  FUN_037f8228();
  thunk_FUN_037feb24();
  uVar1 = FUN_037f83b0();
  FUN_037ff798(6);
  FUN_037fec7c();
  FUN_037fbd04(1,FUN_037f8000);
  FUN_037fbc4c(1);
  _DAT_04000004 = _DAT_04000004 | 8;
  _DAT_04000208 = CONCAT22(DAT_04000208_2,1);
  OS_EnableInterrupts();
  thunk_FUN_03803bd4(0xffffffff);
  FUN_03803230(0xf);
  FUN_027f7088(0xc);
  FUN_03806104(uVar1);
  FUN_03804878(2);
  do {
    SVC_Halt();
    iVar2 = FUN_037fe4e8();
    if (iVar2 != 0) {
      FUN_038072a0(0);
      FUN_037fe428();
    }
    FUN_038070c4();
    FUN_0380417c();
  } while( true );
}

