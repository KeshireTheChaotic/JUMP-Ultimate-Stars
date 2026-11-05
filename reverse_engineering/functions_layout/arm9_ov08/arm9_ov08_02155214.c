
void FUN_02155214(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  byte local_28 [4];
  undefined1 local_24;
  byte local_23 [4];
  undefined1 local_1f;
  byte local_1e [4];
  undefined1 local_1a;
  
  local_28[0] = DAT_0216a4dc;
  local_28[1] = DAT_0216a4dd;
  local_28[2] = DAT_0216a4de;
  local_28[3] = DAT_0216a4df;
  local_24 = DAT_0216a4e0;
  local_23[0] = DAT_0216a4e4;
  local_23[1] = DAT_0216a4e5;
  local_23[2] = DAT_0216a4e6;
  local_23[3] = DAT_0216a4e7;
  local_1f = DAT_0216a4e8;
  local_1e[0] = DAT_0216a4d4;
  local_1e[1] = DAT_0216a4d5;
  local_1e[2] = DAT_0216a4d6;
  local_1e[3] = DAT_0216a4d7;
  local_1a = DAT_0216a4d8;
  iVar5 = 0;
  if (local_28[param_2] != 0) {
    iVar4 = param_2 * 0x30;
    puVar3 = (ushort *)(&DAT_0216a51c + iVar4);
    do {
      puVar2 = *(uint **)(DAT_0216e6dc + iVar4 + 0x30);
      *puVar2 = *puVar2 & 0xc1fffcff;
      puVar2 = *(uint **)(DAT_0216e6dc + iVar4 + 0x30);
      *puVar2 = (*puVar3 & 0x1ff) << 0x10 | *puVar2 & 0xfe00ff00 | param_3 & 0xff;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      puVar3 = puVar3 + 2;
    } while (iVar5 < (int)(uint)local_28[param_2]);
  }
  if (param_2 < 4) {
    FUN_0216639c(*(undefined4 *)(param_2 * 4 + DAT_0216e6dc + param_1 * 0x10),
                 *(undefined2 *)(&DAT_0216a51c + param_2 * 0x30),param_3,
                 *(undefined4 *)(DAT_0216e6dc + param_2 * 4 + 0x104),2);
  }
  iVar5 = FUN_02050750(param_2 + 3,4);
  iVar4 = 0;
  if (local_23[param_2] != 0) {
    iVar5 = iVar5 * 4;
    uVar1 = *(ushort *)(&DAT_0216a4fc + iVar5);
    do {
      puVar2 = *(uint **)(iVar5 + DAT_0216e6dc + 0xec);
      *puVar2 = *puVar2 & 0xc1fffcff;
      puVar2 = *(uint **)(iVar5 + DAT_0216e6dc + 0xec);
      *puVar2 = (uVar1 & 0x1ff) * 0x10000 | *puVar2 & 0xfe00ff00 | param_3 & 0xff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)local_23[param_2]);
  }
  iVar5 = 0;
  if (local_1e[param_2] != 0) {
    iVar4 = 0;
    puVar6 = &DAT_0216a4f4;
    do {
      FUN_02165ce0(*(undefined4 *)(DAT_0216e6dc + iVar4 + 0xfc),0xffffffff,0,0);
      FUN_02165bc4(*(undefined4 *)(DAT_0216e6dc + iVar4 + 0xfc),0xffffffff,*puVar6,param_3);
      iVar4 = iVar4 + 4;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)local_1e[param_2]);
  }
  return;
}

