
undefined4 * FUN_0217f6f8(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0217583c(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_0200169c(8,8,4,0x217f771,0x217f765,0x217f77d);
  puVar1[6] = uVar2;
  if (puVar1[6] == 0) {
    FUN_02175814(puVar1);
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  *puVar1 = param_2;
  *(undefined2 *)(puVar1 + 1) = param_3;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  return puVar1;
}

