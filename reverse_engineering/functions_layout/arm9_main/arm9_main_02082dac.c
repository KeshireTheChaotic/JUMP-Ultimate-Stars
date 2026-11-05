
void FUN_02082dac(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((*(uint *)(param_2 + 0x34) & 8) == 0) {
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_02082e00:
      *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
      return;
    }
    if (param_2 == puVar1[2]) {
      FUN_02037c24(param_1 + 0x10,puVar1);
      FUN_02037b98(param_1 + 0x18,puVar1);
      goto LAB_02082e00;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

