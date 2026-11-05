
void FUN_020678f4(undefined1 param_1,int param_2,byte param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  
  *(undefined1 *)(param_4 + 0x46d) = param_1;
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 & 2) == 0) {
    cVar2 = (char)((int)(uint)uVar1 >> 2) + '\x19';
  }
  else {
    cVar2 = (char)((uVar1 & 0x3ff) >> 2);
  }
  *(char *)(param_4 + 0x46e) = cVar2;
  *(byte *)(param_4 + 0x46f) = *(byte *)(param_4 + 0x46f) & 0x80 | param_3 & 0x7f;
  MIi_CpuCopy32(param_2,param_4 + 0xbf0,0xc0);
  return;
}

