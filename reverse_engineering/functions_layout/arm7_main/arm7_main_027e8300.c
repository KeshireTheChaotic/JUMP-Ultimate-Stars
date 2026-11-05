
void FUN_027e8300(void)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 local_10;
  undefined2 local_e [3];
  
  psVar1 = DAT_027f97f0;
  if (*DAT_027f97f0 == 1) {
    iVar3 = FUN_027e8110(&local_10,local_e);
    if (iVar3 == 0) {
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 5;
      puVar2[1] = 1;
      puVar2[2] = local_10;
      puVar2[3] = local_e[0];
      FUN_038080d0();
    }
    else {
      *psVar1 = 2;
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 5;
      puVar2[1] = 0;
      FUN_038080d0();
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 5;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

