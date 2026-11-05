
void FUN_02082d2c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x10); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (param_2 == puVar1[2]) {
        FUN_02037c24(param_1 + 0x10,puVar1);
        FUN_02037b98(param_1 + 0x18,puVar1);
        break;
      }
    }
  }
  FUN_02037c24(param_1,param_2);
  FUN_020517fc(param_2,0,0x40);
  FUN_02037b98(param_1 + 8,param_2);
  return;
}

