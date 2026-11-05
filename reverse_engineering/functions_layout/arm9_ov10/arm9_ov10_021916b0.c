
void FUN_021916b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = DAT_021a9d20;
  FUN_020517fc(&DAT_021a9d34,0,0x30);
  DAT_021a9d38 = piVar1[6];
  DAT_021a9d3c = piVar1[7];
  DAT_021a9d44 = 0x2191641;
  DAT_021a9d48 = 0;
  DAT_021a9d4c = 0;
  DAT_021a9d60 = DAT_021a9d24;
  DAT_021a9d54 = piVar1[9];
  if (DAT_021a9d54 == 0) {
    DAT_021a9d54 = 0x4000;
  }
  if (piVar1[10] == 0) {
    DAT_021a9d50 = (*(code *)DAT_021a9d20[6])(DAT_021a9d54);
  }
  else {
    DAT_021a9d50 = piVar1[10];
  }
  iVar3 = piVar1[0xc];
  if (iVar3 == 0) {
    iVar3 = 0x240;
  }
  iVar2 = piVar1[0xd];
  if (iVar2 == 0) {
    iVar2 = 0x10c0;
  }
  DAT_021a9d58 = iVar3 + -0x28;
  DAT_021a6eda = (undefined2)iVar2;
  DAT_021a6edc = FUN_0200d12c(iVar2,2);
  DAT_021a8538 = 0;
  bVar4 = *piVar1 == 0;
  if (bVar4) {
    DAT_021a9d40 = &LAB_0219166c_1;
  }
  else {
    DAT_021a9d40 = &LAB_0219165c_1;
    DAT_021a9d5c = DAT_021a9d28;
  }
  DAT_021a9d34 = (uint)bVar4;
  DAT_021a9d2c = (uint)!bVar4;
  iVar3 = piVar1[0xb];
  if (iVar3 == 0) {
    iVar3 = 0xb;
  }
  FUN_021912c0(iVar3);
  FUN_02199b70(&LAB_02190ec8_1);
  FUN_02191330(0x2192e0d);
  FUN_0219137c(&DAT_021a9d34);
  return;
}

