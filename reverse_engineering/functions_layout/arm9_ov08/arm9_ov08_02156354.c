
void FUN_02156354(int param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  byte local_28 [4];
  undefined1 local_24;
  byte local_23 [4];
  undefined1 local_1f;
  byte local_1e [4];
  undefined1 local_1a;
  
  local_28[0] = DAT_0216a7b0;
  local_28[1] = DAT_0216a7b1;
  local_28[2] = DAT_0216a7b2;
  local_28[3] = DAT_0216a7b3;
  local_24 = DAT_0216a7b4;
  local_23[0] = DAT_0216a7b8;
  local_23[1] = DAT_0216a7b9;
  local_23[2] = DAT_0216a7ba;
  local_23[3] = DAT_0216a7bb;
  local_1f = DAT_0216a7bc;
  local_1e[0] = DAT_0216a7a8;
  local_1e[1] = DAT_0216a7a9;
  local_1e[2] = DAT_0216a7aa;
  local_1e[3] = DAT_0216a7ab;
  local_1a = DAT_0216a7ac;
  iVar4 = 0;
  if (local_28[param_1] != 0) {
    iVar3 = param_1 * 0xc;
    puVar2 = (ushort *)(&DAT_0216a800 + iVar3);
    do {
      puVar1 = *(uint **)(DAT_0216e6e0 + iVar3 + 0x10);
      *puVar1 = *puVar1 & 0xc1fffcff;
      puVar1 = *(uint **)(DAT_0216e6e0 + iVar3 + 0x10);
      *puVar1 = (*puVar2 & 0x1ff) << 0x10 | *puVar1 & 0xfe00ff00 | param_2 & 0xff;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      puVar2 = puVar2 + 2;
    } while (iVar4 < (int)(uint)local_28[param_1]);
  }
  if (param_1 < 4) {
    FUN_0216639c(*(undefined4 *)(DAT_0216e6e0 + param_1 * 4),
                 *(undefined2 *)(&DAT_0216a800 + param_1 * 0xc),param_2,
                 *(undefined4 *)(DAT_0216e6e0 + param_1 * 4 + 0x48),2);
  }
  iVar4 = 0;
  if (local_23[param_1] != 0) {
    iVar3 = 0;
    puVar2 = &DAT_0216a7c8;
    do {
      puVar1 = *(uint **)(DAT_0216e6e0 + iVar3 + 0x38);
      *puVar1 = *puVar1 & 0xc1fffcff;
      puVar1 = *(uint **)(DAT_0216e6e0 + iVar3 + 0x38);
      *puVar1 = (*puVar2 & 0x1ff) << 0x10 | *puVar1 & 0xfe00ff00 | param_2 & 0xff;
      iVar3 = iVar3 + 4;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)local_23[param_1]);
  }
  iVar4 = 0;
  if (local_1e[param_1] != 0) {
    iVar3 = 0;
    puVar5 = &DAT_0216a7d0;
    do {
      FUN_02165ce0(*(undefined4 *)(DAT_0216e6e0 + iVar3 + 0x40),0xffffffff,0,0);
      FUN_02165bc4(*(undefined4 *)(DAT_0216e6e0 + iVar3 + 0x40),0xffffffff,*puVar5,param_2);
      iVar3 = iVar3 + 4;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)local_1e[param_1]);
  }
  return;
}

