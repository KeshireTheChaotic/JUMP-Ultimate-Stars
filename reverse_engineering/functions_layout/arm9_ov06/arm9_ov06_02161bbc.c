
void FUN_02161bbc(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_FUN_02161c68;
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  *(int *)(iVar3 + 0xf8) = param_2;
  puVar2 = PTR_FUN_02161c6c;
  *(undefined **)(iVar3 + 0xfc) = puVar1;
  puVar1 = PTR_LAB_02161c70;
  *(undefined **)(iVar3 + 0x100) = puVar2;
  puVar2 = PTR_FUN_02161c74;
  *(undefined **)(iVar3 + 0x104) = puVar1;
  puVar1 = PTR_FUN_02161c78;
  *(undefined **)(iVar3 + 0x108) = puVar2;
  puVar2 = PTR_FUN_02161c7c;
  *(undefined **)(iVar3 + 0x10c) = puVar1;
  puVar1 = PTR_FUN_02161c80;
  *(undefined **)(iVar3 + 0x110) = puVar2;
  puVar2 = PTR_LAB_02161c84;
  *(undefined **)(iVar3 + 0x114) = puVar1;
  puVar1 = PTR_LAB_02161c88;
  *(undefined **)(iVar3 + 0x118) = puVar2;
  puVar2 = PTR_FUN_02161c8c;
  *(undefined **)(iVar3 + 0x11c) = puVar1;
  puVar1 = PTR_FUN_02161c90;
  *(undefined **)(iVar3 + 0x138) = puVar2;
  puVar2 = PTR_FUN_02161c94;
  *(undefined **)(iVar3 + 0x120) = puVar1;
  puVar1 = PTR_FUN_02161c98;
  *(undefined **)(iVar3 + 0x134) = puVar2;
  puVar2 = PTR_LAB_02161c9c;
  *(undefined **)(iVar3 + 0x124) = puVar1;
  puVar1 = PTR_LAB_02161ca0;
  *(undefined **)(iVar3 + 0x128) = puVar2;
  puVar2 = PTR_FUN_02161ca4;
  *(undefined **)(iVar3 + 300) = puVar1;
  puVar1 = PTR_FUN_02161ca8;
  *(undefined **)(iVar3 + 0x148) = puVar2;
  puVar2 = PTR_FUN_02161cac;
  *(undefined **)(iVar3 + 0x140) = puVar1;
  puVar1 = PTR_FUN_02161cb0;
  *(undefined **)(iVar3 + 0x13c) = puVar2;
  *(undefined **)(iVar3 + 0x144) = puVar1;
  return;
}

