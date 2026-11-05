
undefined4 FUN_0215898c(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  iVar6 = (short)param_3 * 0x4dc + param_2 + 0x20;
  *(int *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar6 + 0x370) = (int)*(short *)(param_1 + 6) << 0xc
  ;
  *(int *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar6 + 0x374) = (int)*(short *)(param_1 + 8) << 0xc
  ;
  uVar3 = (uint)*(byte *)(param_1 + 4);
  if ((&DAT_0215c98c)[uVar3] == '\0') {
    uVar3 = uVar3 - 4 & 0xff;
    local_30 = (int)*(short *)(param_1 + 8) << 0xc;
    local_2c = (int)*(short *)(param_1 + 6) << 0xc;
    FUN_0214d4c0(*(undefined4 *)(iVar6 + uVar3 * 4 + 0x1d0),&local_2c,&local_30);
    piVar1 = *(int **)(*(int *)(iVar6 + uVar3 * 4 + 0x1d0) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  else {
    *(undefined2 *)(iVar6 + uVar3 * 2 + 0x48c) = 100;
    local_20 = (int)*(short *)(param_1 + 8) << 0xc;
    local_1c = (int)*(short *)(param_1 + 6) << 0xc;
    FUN_0214d4c0(*(undefined4 *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 4 + 0x1c0),&local_1c,
                 &local_20);
    piVar1 = *(int **)(*(int *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 4 + 0x1c0) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    local_24 = 0x1000;
    FUN_02151858(*(undefined4 *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 4 + 0x1c0),&local_24);
    iVar4 = *(int *)(iVar6 + 0x34c);
    iVar5 = iVar4 + (uint)*(ushort *)(iVar4 + 2);
    if (*(char *)(iVar4 + (uint)*(ushort *)(iVar4 + 2)) == '\x04') {
      *(undefined2 *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 2 + 0x48c) = *(undefined2 *)(iVar5 + 8)
      ;
      uVar2 = FUN_0200c99c(*(undefined2 *)(iVar5 + 8));
      uVar2 = FUN_0200c5ac(uVar2,0x42c80000);
      FUN_0200c9e4(0x45800000,uVar2);
      local_28 = FUN_0200c8e0();
      FUN_02151858(*(undefined4 *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 4 + 0x1c0),&local_28);
    }
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      piVar1 = *(int **)(*(int *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 4 + 0x2f8) + 4);
      (**(code **)(*piVar1 + 0x94))(piVar1,0);
    }
    else {
      piVar1 = *(int **)(*(int *)(iVar6 + (uint)*(byte *)(param_1 + 4) * 4 + 0x2f8) + 4);
      (**(code **)(*piVar1 + 0x94))(piVar1,1);
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    *(uint *)(iVar6 + 0x34c) =
         *(int *)(iVar6 + 0x34c) + (uint)*(ushort *)(*(int *)(iVar6 + 0x34c) + 2);
    *(short *)(iVar6 + 0x46c) = *(short *)(iVar6 + 0x46c) + 1;
    uVar2 = FUN_02158bc4(*(undefined4 *)(iVar6 + 0x34c),param_2,param_3);
  }
  return uVar2;
}

