
undefined4 FUN_0216ee14(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 8);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if ((puVar1[6] & 1) != 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}

