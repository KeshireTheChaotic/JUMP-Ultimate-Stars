
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027e9b60(ushort param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808158","0480815a"] */
  _DAT_04808158 = param_1 | 0x5000;
  _DAT_0480815a = param_2;
  iVar1 = FUN_037fb88c();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

