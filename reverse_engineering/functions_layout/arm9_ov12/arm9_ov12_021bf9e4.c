
void FUN_021bf9e4(int param_1,undefined4 param_2,uint param_3,undefined2 param_4)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = '\x01';
  MIi_CpuCopy16(param_2,param_1 + 0x35e,0x14a);
  uVar1 = 0;
  do {
    if ((param_3 & 2 << (uVar1 & 0xff)) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xf);
  *(char *)(param_1 + 0x358) = cVar2;
  *(ushort *)(param_1 + 0x35a) = (ushort)param_3 | 1;
  *(undefined2 *)(param_1 + 0x35c) = param_4;
  *(char *)(param_1 + 0x4b4) = *(char *)(param_1 + 0x4b4) + '\x01';
  return;
}

