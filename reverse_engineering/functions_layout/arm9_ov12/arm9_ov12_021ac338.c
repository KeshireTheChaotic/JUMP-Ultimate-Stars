
void FUN_021ac338(byte *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  
  if (*(int *)param_1 << 0x1f < 0) {
    *param_2 = *(undefined4 *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 4);
  }
  else {
    *param_2 = param_1 + 1;
    uVar1 = (uint)(*param_1 >> 1);
  }
  *param_3 = uVar1;
  return;
}

