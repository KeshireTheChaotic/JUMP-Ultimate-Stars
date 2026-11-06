
void FUN_0214e6d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = FUN_020759a4(*(undefined4 *)(iVar3 + 0x40),param_2,&local_14);
  if (iVar1 != 0) {
    FUN_0201ad30(DAT_020a0dd8,1,0);
    FUN_0214da24(*(undefined4 *)(iVar3 + 0x44));
    iVar1 = *(int *)(iVar3 + 0x44);
    *(code **)(iVar1 + 0xd4) = FUN_0214de00;
    *(int *)(iVar1 + 0xdc) = iVar3;
    piVar2 = (int *)FUN_02033410(s_bin_koma_bin_02160cac,0,0);
    if (piVar2[7] == 0) {
      (**(code **)(*piVar2 + 0x10))();
    }
    iVar4 = piVar2[7];
    piVar2 = *(int **)(iVar4 + 4);
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    func_0x021bac78(*(undefined4 *)(iVar3 + 0x38),0,
                    *(int *)(iVar3 + 0x30) + local_14 * 0xc +
                    *(int *)(*(int *)(iVar3 + 0x30) + local_14 * 0xc),0,0,0,0,0,0);
    FUN_02075f98(local_14 * 0xc + iVar1);
    (**(code **)(**(int **)(iVar4 + 4) + 0xc))();
    FUN_0207342c(0x78,9);
    *(undefined1 *)(iVar3 + 0x57) = 1;
    FUN_02028330(*(undefined4 *)(*(int *)(iVar3 + 4) + 4));
    FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),FUN_0214e820);
    FUN_0201ad30(DAT_020a0dd8,1,0);
  }
  return;
}

