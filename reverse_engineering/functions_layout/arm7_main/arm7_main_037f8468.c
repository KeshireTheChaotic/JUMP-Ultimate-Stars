
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK NitroSpMain [structural] crt0 tail: ldr r1,=X ; ldr lr,=HW_RESET_VECTOR ; bx r1 */

void NitroSpMain(void)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"IRQ":1,"IO_other":1} io=["04000004","04000208"] */
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
  _DAT_04000208 = 1;
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

