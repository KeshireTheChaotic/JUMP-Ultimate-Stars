
void FUN_021b2994(int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_2 + 4);
  puVar2 = *(undefined4 **)(param_2 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    if ((uint)puVar2[3] < *param_3) {
      puVar2 = (undefined4 *)puVar2[1];
    }
    else {
      puVar1 = puVar2;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  if ((puVar1 == (undefined4 *)(param_2 + 4)) || (*param_3 < (uint)puVar1[3])) {
    puVar1 = (undefined4 *)(param_2 + 4);
  }
  *param_1 = (int)puVar1;
  return;
}

