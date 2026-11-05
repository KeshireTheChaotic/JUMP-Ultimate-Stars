
void FUN_02037244(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = 4;
  puVar2 = (undefined1 *)(param_1 + 0x40);
  puVar3 = param_2;
  do {
    iVar1 = iVar1 + -1;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  *(undefined1 *)(param_1 + 0x44) = param_2[4];
  *(undefined1 *)(param_1 + 0x45) = param_2[5];
  *(undefined1 *)(param_1 + 0x46) = param_2[6];
  *(undefined1 *)(param_1 + 0x47) = param_2[7];
  *(undefined1 *)(param_1 + 0x48) = param_2[8];
  *(undefined1 *)(param_1 + 0x49) = param_2[9];
  *(undefined1 *)(param_1 + 0x4a) = param_2[10];
  *(undefined1 *)(param_1 + 0x4b) = param_2[0xb];
  *(undefined1 *)(param_1 + 0x4c) = param_2[0xc];
  *(undefined1 *)(param_1 + 0x4d) = param_2[0xd];
  *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(param_1 + 100) = (uint)*(ushort *)(param_2 + 0x10);
  *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(param_2 + 0x12);
  *(uint *)(param_1 + 0x6c) = (uint)*(ushort *)(param_2 + 0x14);
  *(uint *)(param_1 + 0x70) = (uint)*(ushort *)(param_2 + 0x16);
  return;
}

