
void FUN_021cc17c(int param_1,uint param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined2 *local_1c;
  undefined1 auStack_18 [4];
  
  uVar2 = 0;
  *(undefined1 *)(param_6 + 0xb) = 0;
  if (param_1 == 0) {
    for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
      FUN_020517fc(param_3[uVar2],0,param_4);
    }
  }
  else {
    if (*(char *)(param_6 + 7) != '\0') {
      FUN_02061320(param_6 + 0xcc,&LAB_021cc164_1,param_6);
      *(undefined1 *)(param_6 + 7) = 0;
    }
    local_1c = *(undefined2 **)(param_6 + 0xd0);
    iVar1 = FUN_020612c4();
    bVar3 = param_4 <= (uint)(iVar1 - (int)local_1c);
    if (!bVar3) {
      local_1c = (undefined2 *)((int)local_1c + param_4);
    }
    *(bool *)(param_6 + 9) = bVar3;
    iVar1 = FUN_021ce054(*param_3,param_4,auStack_18);
    *(bool *)(param_6 + 0xb) = iVar1 != 0;
    iVar1 = FUN_02064dc0(&DAT_0400006c);
    if (iVar1 != 0) {
      FUN_020517fc(*param_3,0,param_4);
    }
    if (*(char *)(param_6 + 10) == '\0') {
      local_1c = &DAT_021d5340;
      FUN_021ce2c4(&DAT_021d5340,param_4);
    }
    else {
      FUN_021ce2c4(local_1c,param_4);
    }
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      DC_FlushRange(param_3[uVar2],param_4);
    }
    DC_InvalidateRange(local_1c,param_4);
  }
  return;
}

