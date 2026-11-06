
/* JUS-GAME ALFont::MakeFixBounds [source-string] __FILE__="ALFont.cpp" __FUNCTION__="MakeFixBounds"
   lines=[678] passed to 1 source-location call(s) */

void ALFont::MakeFixBounds(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_2c;
  uint local_1c;
  
  local_1c = param_4;
  if (param_4 == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(*(int **)(param_1 + 0x28),0);
    local_1c = FUN_0200d338(uVar1,param_2);
  }
  if (param_5 == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x1c))(*(int **)(param_1 + 0x28),0);
    param_5 = FUN_0200d338(uVar1,param_3);
  }
  iVar3 = param_5 * local_1c;
  *(int *)(param_1 + 0x50) = iVar3;
  local_2c = thunk_FUN_0201a228(iVar3 * 8,s_ALFont_cpp_021d5060,s_MakeFixBounds_021d4ea8,0x2a6);
  if (local_2c != 0) {
    local_2c = FUN_0200ef34(local_2c,iVar3,8,0,FUN_021cb430,0);
  }
  for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + 1) {
    iVar3 = local_2c + uVar2 * local_1c * 8;
    for (uVar4 = 0; uVar4 < local_1c; uVar4 = uVar4 + 1) {
      iVar5 = iVar3 + uVar4 * 8;
      *(short *)(iVar3 + uVar4 * 8) = (short)param_2 * (short)uVar4;
      *(short *)(iVar5 + 2) = (short)(uVar2 * param_3 * 0x10000 >> 0x10);
      *(short *)(iVar5 + 4) = (short)param_2;
      *(short *)(iVar5 + 6) = (short)param_3;
    }
  }
  FUN_020360d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x50),local_2c);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_020360d0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x50),local_2c);
  }
  FUN_0201b268(local_2c);
  return;
}

