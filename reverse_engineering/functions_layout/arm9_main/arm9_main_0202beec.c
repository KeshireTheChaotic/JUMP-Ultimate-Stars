
void FUN_0202beec(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  iVar1 = FUN_0202b6ec(param_1,2);
  local_48 = *(undefined4 *)(param_1 + 0x78);
  local_44 = param_2[1];
  local_40 = *param_2;
  FUN_0202b9c8(auStack_24,&local_40,&local_44,&local_48);
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))
            (*(int **)(iVar1 + 4),auStack_24,&DAT_02093ca4,param_5,param_8,&DAT_02093c2c,
             &DAT_02093c2c,&DAT_02093c2c);
  local_54 = *(undefined4 *)(param_1 + 0x78);
  local_50 = param_3[1];
  local_4c = *param_3;
  FUN_0202b9c8(auStack_30,&local_4c,&local_50,&local_54);
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))
            (*(int **)(iVar1 + 4),auStack_30,&DAT_02093ca4,param_6,param_9,&DAT_02093c2c,
             &DAT_02093c2c,&DAT_02093c2c);
  local_60 = *(undefined4 *)(param_1 + 0x78);
  local_5c = param_4[1];
  local_58 = *param_4;
  FUN_0202b9c8(auStack_3c,&local_58,&local_5c,&local_60);
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))
            (*(int **)(iVar1 + 4),auStack_3c,&DAT_02093ca4,param_7,param_10,&DAT_02093c2c,
             &DAT_02093c2c,&DAT_02093c2c);
  return;
}

