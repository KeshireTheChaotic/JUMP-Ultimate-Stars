
void FUN_0201fe70(int *param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_20;
  undefined4 *puStack_1c;
  
  puStack_1c = param_4;
  (**(code **)(*param_1 + 0xd0))();
  iVar1 = FUN_0201e6d4();
  uVar2 = (**(code **)(*param_1 + 0xd0))();
  iVar3 = FUN_02020590(uVar2,*(undefined2 *)((int)param_1 + 0x2a));
  if (*(byte *)(iVar1 + 4) < 2) {
    uVar5 = (uint)*(ushort *)(iVar3 + param_2 * 2 + 0x28);
  }
  else {
    iVar1 = 0;
    for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
      iVar1 = iVar1 + (uint)*(ushort *)(iVar3 + uVar5 * 2 + 0x28);
    }
    uVar5 = iVar1 + (uint)*(ushort *)(iVar3 + param_2 * 2 + 0x28);
  }
  iVar1 = *(int *)(param_1[0x17] + param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xd0))();
  uVar2 = FUN_02020514(uVar2,*(undefined1 *)(iVar3 + uVar5 + param_3 + 2));
  piVar6 = *(int **)(iVar1 + 0x1c);
  uVar4 = FUN_020326b0();
  (**(code **)(*piVar6 + 0x40))(piVar6,uVar2,&local_20,uVar4);
  *param_4 = local_20;
  return;
}

