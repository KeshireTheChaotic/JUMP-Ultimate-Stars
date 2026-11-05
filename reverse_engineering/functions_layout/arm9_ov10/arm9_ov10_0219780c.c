
void FUN_0219780c(int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *local_24;
  ushort *local_20;
  int local_1c;
  
  iVar1 = thunk_FUN_02197c28(param_2,param_3);
  if (iVar1 * 2 < param_3) {
    FUN_020517fc(param_1 + iVar1 * 4,0,(param_3 + iVar1 * -2) * 2);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    puVar3 = param_2;
    do {
      if (param_3 <= iVar4) break;
      iVar2 = (uint)*puVar3 * (uint)*puVar3;
      *(short *)(param_1 + iVar4 * 2) = (short)iVar2;
      if (iVar4 == param_3 + -1) break;
      *(short *)(param_1 + (iVar4 + 1) * 2) = (short)((uint)iVar2 >> 0x10);
      iVar4 = iVar4 + 2;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  local_1c = 0;
  if (0 < iVar1) {
    local_24 = param_2;
    do {
      iVar5 = local_1c + 1;
      local_20 = param_2 + iVar5;
      for (; (iVar5 < iVar1 && (iVar4 = local_1c + iVar5, iVar4 < param_3)); iVar5 = iVar5 + 1) {
        uVar6 = (uint)*local_24 * (uint)*local_20;
        if (uVar6 < 0x7fff8001) {
          FUN_021979c4(param_1,uVar6 * 2,iVar4,param_3);
        }
        else {
          FUN_021979c4(param_1,uVar6,iVar4,param_3);
          FUN_021979c4(param_1,uVar6,iVar4,param_3);
        }
        local_20 = local_20 + 1;
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < iVar1);
  }
  return;
}

