
undefined4 FUN_02166188(undefined2 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0216e840;
  if (*(char *)((int)DAT_0216e840 + 9) == '\0') {
    uVar2 = FUN_02167814(1,&LAB_02166160_1,DAT_0216e840,200);
    *puVar1 = uVar2;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined2 *)((int)puVar1 + 6) = param_1;
    *(undefined1 *)((int)puVar1 + 9) = 1;
    return 1;
  }
  return 0;
}

