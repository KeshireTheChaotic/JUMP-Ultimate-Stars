
void FUN_027e8764(int param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_30 [32];
  
  uVar1 = FUN_027e8458(param_1 + 4,auStack_30);
  puVar2 = (undefined2 *)FUN_03808074();
  *puVar2 = 0x23;
  puVar2[1] = uVar1;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 4);
  FUN_037fe788(auStack_30,puVar2 + 4,0x1c);
  FUN_038080d0(puVar2);
  return;
}

