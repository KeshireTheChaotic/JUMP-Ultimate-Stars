
void FUN_027e5148(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 local_10 [4];
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_027e4b64(param_1,0,local_10);
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0xd;
    puVar2[1] = 0;
    puVar2[4] = (short)uVar3;
    puVar2[5] = local_10[0];
    FUN_038080d0();
  }
  return;
}

