
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_Class_020947a8::vfunc_06 [class-virtual] slot 6 of vtable 020947a8 (own slot, not
   inherited) */

int jus_Class_020947a8::vfunc_06
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
                    /* JUS-TAG hw={"GX_3D":1} io=["040004ac"] */
  iVar2 = param_1;
  if (param_1 != 0) {
    iVar2 = param_1 + 0x24;
  }
  uVar1 = FUN_02045b08(DAT_020a0ed0,iVar2);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x1c);
  }
  if (!bVar3 || uVar1 != 0) {
    FUN_0203ef80(DAT_020a0f20,param_1,*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x20),(uint)*(ushort *)(param_1 + 8) << 1,param_4);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  _DAT_040004ac = *(uint *)(param_1 + 0x20) >> 4;
  return param_1;
}

