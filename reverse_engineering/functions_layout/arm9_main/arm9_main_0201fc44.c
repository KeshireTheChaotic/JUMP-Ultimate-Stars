
undefined4 FUN_0201fc44(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    param_3 = param_1[7];
  }
  (**(code **)(*param_1 + 0xd0))();
  iVar1 = FUN_0201e6d4();
  uVar5 = 0;
  do {
    if (*(byte *)(iVar1 + 6) <= uVar5) {
      return 0;
    }
    iVar6 = *(int *)(param_1[0x17] + uVar5 * 4);
    for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(iVar6 + 0x52); iVar4 = iVar4 + 1) {
      iVar3 = *(int *)(iVar6 + 0x4c);
      iVar2 = *(int *)(iVar3 + iVar4 * 0x10 + 4);
      bVar7 = iVar2 == param_2;
      if (bVar7) {
        iVar2 = *(int *)(iVar3 + iVar4 * 0x10);
      }
      if (bVar7 && iVar2 == param_3) {
        return 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

