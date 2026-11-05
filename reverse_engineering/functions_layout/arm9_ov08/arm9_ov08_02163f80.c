
void FUN_02163f80(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  byte local_84;
  undefined1 local_83;
  undefined1 auStack_82 [20];
  undefined2 local_6e [7];
  undefined1 uStack_60;
  byte local_5f;
  undefined1 auStack_5c [20];
  ushort local_48;
  
  FUN_0205542c(&uStack_60);
  local_84 = local_84 & 0xf0 | local_5f & 0xf;
  local_83 = (undefined1)local_48;
  FUN_02051890(auStack_5c,auStack_82,(uint)local_48 << 1);
  puVar2 = DAT_0216e808;
  local_84 = local_84 & 0xf;
  puVar3 = local_6e;
  local_6e[0] = 0;
  local_6e[1] = 0;
  local_6e[2] = 0;
  local_6e[3] = 0;
  local_6e[4] = 0;
  local_6e[5] = 0;
  local_6e[6] = 0;
  iVar4 = 7;
  puVar5 = DAT_0216e808;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 **)(puVar2 + 0xd8a0) = puVar2 + 0x8020;
  iVar4 = func_0x021c0264(*(undefined4 *)(DAT_0216e808 + 0xd8a0),&local_84,param_1,param_2,2);
  if (iVar4 != 0) {
    FUN_02055684();
  }
  func_0x021c01a8(0x100,1);
  func_0x021beb40(0x21639e9);
  FUN_021639dc(1);
  return;
}

