
void FUN_027e2dd8(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 local_10;
  undefined2 local_e [3];
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  DAT_027f97f0 = *(undefined4 *)(param_1 + 8);
  DAT_027f97ec = puVar3;
  *puVar3 = DAT_027f97f0;
  puVar3[2] = *(undefined4 *)(param_1 + 0xc);
  FUN_027e7ec8();
  FUN_03805edc(0xf);
  *(undefined2 *)*puVar3 = 1;
  iVar1 = FUN_027e8110(&local_10,local_e);
  if (iVar1 == 0) {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0;
    puVar2[1] = 1;
    puVar2[2] = local_10;
    puVar2[3] = local_e[0];
    FUN_038080d0();
  }
  else {
    *(undefined2 *)*puVar3 = 2;
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_038080d0();
  }
  return;
}

