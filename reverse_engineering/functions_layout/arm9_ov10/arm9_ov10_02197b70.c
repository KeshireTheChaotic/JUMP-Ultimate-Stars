
void FUN_02197b70(ushort *param_1,ushort *param_2,ushort *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  
  iVar1 = thunk_FUN_02197c28(param_2,param_4);
  iVar2 = thunk_FUN_02197c28(param_3,param_4);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar1 != param_4) {
    iVar1 = iVar1 + 1;
  }
  uVar6 = 0;
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = param_1;
    puVar4 = param_2;
    puVar5 = param_3;
    do {
      uVar6 = uVar6 + (uint)*puVar4 + (uint)*puVar5;
      *puVar3 = (ushort)uVar6;
      uVar6 = uVar6 >> 0x10;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if ((param_1 != param_2) && (param_1 != param_3)) {
    FUN_020517fc(param_1 + iVar2,0,(param_4 - iVar2) * 2);
  }
  return;
}

