
void FUN_0202b8d0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  iVar1 = FUN_0202b6ec(param_1,0);
  local_3c = *(undefined4 *)(param_1 + 0x78);
  local_38 = param_2[1];
  local_34 = *param_2;
  FUN_0202b9c8(auStack_24,&local_34,&local_38,&local_3c);
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))
            (*(int **)(iVar1 + 4),auStack_24,&DAT_02093ca4,param_4,param_6,&DAT_02093c2c,
             &DAT_02093c2c,&DAT_02093c2c);
  local_48 = *(undefined4 *)(param_1 + 0x78);
  local_44 = param_3[1];
  local_40 = *param_3;
  FUN_0202b9c8(auStack_30,&local_40,&local_44,&local_48);
  (**(code **)(**(int **)(iVar1 + 4) + 0x10))
            (*(int **)(iVar1 + 4),auStack_30,&DAT_02093ca4,param_5,param_7,&DAT_02093c2c,
             &DAT_02093c2c,&DAT_02093c2c);
  return;
}

