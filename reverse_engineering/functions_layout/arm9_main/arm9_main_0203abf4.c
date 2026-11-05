
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_Class_02095f80::vfunc_07 [class-virtual] slot 7 of vtable 02095f80 (own slot, not
   inherited) */

void jus_Class_02095f80::vfunc_07(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
                    /* JUS-TAG hw={"GX_3D":3} io=["04000454","04000470","040004ac"] */
  FUN_0202534c(&local_28,param_1 + 0x14);
  uVar1 = (uint)(local_28 * 0x1f) >> 0xc;
  if (uVar1 != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
    FUN_0201899c(&local_24);
    local_24 = *(undefined4 *)(iVar2 + 0x10);
    local_20 = *(undefined4 *)(iVar2 + 0x14);
    piVar3 = *(int **)(param_1 + 0x20);
    if (piVar3 == DAT_020a1054) {
      FUN_0203add8(0,1,0,0,0,0,1,0);
    }
    else {
      (**(code **)(*piVar3 + 0x34))(piVar3,0);
      iVar2 = *(int *)(param_1 + 0x20);
      FUN_0203add8(3,1,*(undefined4 *)(iVar2 + 0x74),*(undefined4 *)(iVar2 + 0x78),0,0,1,
                   *(undefined4 *)(iVar2 + 0x50));
      piVar3 = (int *)FUN_02019ddc(param_1 + 0x14);
      (**(code **)(*piVar3 + 0x18))();
      _DAT_040004ac = piVar3[8] + (uint)*(byte *)(param_1 + 0x28) * 0x20 >> 4;
    }
    _DAT_04000454 = 0;
    _DAT_04000470 = *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) << 8;
    FUN_0203ae18(0,0,3,0,uVar1,0);
    iVar2 = *(int *)(param_1 + 0x70);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      _DAT_04000454 = 0;
      _DAT_04000470 = *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) << 8;
      iVar5 = *(int *)(param_1 + iVar2 * 4 + 0x50);
      uVar4 = (**(code **)(**(int **)(iVar5 + 4) + 0x78))();
      piVar3 = *(int **)(iVar5 + 4);
      (**(code **)(*piVar3 + 0x1c))(piVar3,uVar4);
    }
    *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) = *(int *)(*(int *)(param_1 + 0x34) + 0x4bc) + 1;
  }
  return;
}

