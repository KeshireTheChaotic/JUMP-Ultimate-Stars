
void FUN_027e4a98(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = DAT_027f97f0;
  puVar2 = (undefined2 *)FUN_03808074();
  puVar2[1] = 0;
  if (param_1 == 0) {
    *puVar2 = 0xc;
    puVar2[4] = 0x1a;
    puVar2[6] = 0xf001;
    puVar2[5] = *(undefined2 *)(iVar1 + 0x188);
    FUN_037fe788(param_3,puVar2 + 8,6);
    puVar2[0xb] = *(undefined2 *)(iVar1 + 0x30);
    puVar2[0xc] = *(undefined2 *)(iVar1 + 0x32);
  }
  else {
    *puVar2 = 8;
    puVar2[4] = 0x1a;
    puVar2[9] = 0xf001;
    puVar2[8] = param_2;
    FUN_037fe788(param_3,puVar2 + 5,6);
    puVar2[0x16] = *(undefined2 *)(iVar1 + 0x30);
    puVar2[0x17] = *(undefined2 *)(iVar1 + 0x32);
  }
  FUN_038080d0(puVar2);
  return;
}

