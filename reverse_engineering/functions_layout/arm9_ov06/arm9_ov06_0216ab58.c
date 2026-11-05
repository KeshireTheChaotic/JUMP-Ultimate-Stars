
undefined4
FUN_0216ab58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined1 param_6,undefined4 param_7,undefined4 param_8,char param_9,
            undefined2 param_10,undefined2 param_11)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_1f;
  undefined4 uStack_1c;
  
  iVar2 = *(int *)(DAT_021729ec + 0x10);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uStack_1c = param_4;
    FUN_020517fc(auStack_44,0,0x28);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x6c);
    *(undefined4 *)(iVar2 + 0x10) = param_7;
    local_1f = param_6;
    local_38 = 0;
    local_34 = 0;
    *(undefined2 *)(iVar2 + 0x24) = param_10;
    *(undefined2 *)(iVar2 + 0x22) = param_11;
    uVar1 = FUN_0216acc8(iVar2,auStack_44,param_1,param_2,param_3,param_4,param_5,(int)param_9,
                         param_8);
  }
  return uVar1;
}

