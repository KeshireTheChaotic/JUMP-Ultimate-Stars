
undefined4 FUN_02159624(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x24);
  param_3 = param_3 * 0x4dc;
  iVar6 = param_2 + param_3;
  *(char *)(iVar6 + 0x4f4) = cVar1;
  iVar3 = (cVar1 * -0x18 + 200) * 0x8000 >> 0x10;
  iVar5 = 0;
  uStack_28 = param_4;
  do {
    piVar2 = *(int **)(*(int *)(iVar6 + iVar5 * 4 + 0x350) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    piVar2 = *(int **)(*(int *)(iVar6 + iVar5 * 4 + 0x350) + 4);
    (**(code **)(*(int *)piVar2[0x19] + 0x70))();
    (**(code **)(*piVar2 + 0xc4))();
    if (iVar5 < *(char *)(param_1 + 0x24)) {
      local_30 = iVar3 << 0xc;
      local_2c = ((*(short *)(param_1 + iVar5 * 2 + 0x14) * -0xc + 0x100 >> 1) << 0x10) >> 4;
      FUN_0214d4c0(*(undefined4 *)(iVar6 + iVar5 * 4 + 0x350),&local_2c,&local_30);
      piVar2 = *(int **)(*(int *)(*(int *)(iVar6 + iVar5 * 4 + 0x350) + 4) + 100);
      (**(code **)(*piVar2 + 0x68))(piVar2,param_1 + (uint)*(ushort *)(param_1 + iVar5 * 2 + 4));
      piVar2 = *(int **)(*(int *)(iVar6 + iVar5 * 4 + 0x350) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      iVar3 = (iVar3 + 0x18) * 0x10000 >> 0x10;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  *(code **)(param_2 + param_3 + 0x1dc) = FUN_021597d0;
  *(undefined1 *)(param_2 + 0x4f2 + param_3) = 0;
  FUN_0215790c();
  iVar3 = FUN_0203b3f4();
  FUN_0214e2d8(*(undefined4 *)(iVar3 + 0x88),1,0x1e);
  iVar3 = FUN_0203b3f4();
  uVar4 = (uint)*(byte *)(param_2 + 0x4f2 + param_3);
  FUN_021597b4(*(undefined4 *)(iVar3 + 0x88),uVar4,0x10 - uVar4);
  FUN_0214d6e8();
  return 1;
}

