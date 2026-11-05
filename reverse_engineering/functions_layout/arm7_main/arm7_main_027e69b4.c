
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_027e69b4(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
                    /* JUS-TAG hw={"IO_other":1} io=["04000006"] */
  if ((param_2 & 0x8000) == 0) {
    param_2 = (param_2 + 0x1c) * 4 + 0x66;
  }
  else {
    param_2 = param_2 & 0x7fff;
  }
  iVar1 = FUN_03804440(param_3);
  for (iVar2 = (param_4 + -2) - (uint)_DAT_04000006; iVar2 < 0; iVar2 = iVar2 + 0x107) {
  }
  uVar3 = (iVar2 * 0x7f) / 0x14;
  if (uVar3 * 10 < (param_1 + 0x22) * 4 + param_2 * iVar1 + 1000) {
    uVar3 = 0;
  }
  return uVar3 & 0xffff;
}

