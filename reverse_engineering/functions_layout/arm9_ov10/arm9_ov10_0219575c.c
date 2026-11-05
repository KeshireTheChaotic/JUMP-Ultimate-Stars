
void FUN_0219575c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_02051890(param_2 + 2,param_1 + 0x54,0x20);
  iVar3 = param_2 + 0x23;
  uVar4 = (uint)*(byte *)(param_2 + 0x22);
  cVar1 = *(char *)(param_1 + 0x30);
  if (((cVar1 == '\0') || (uVar4 != 0x20)) ||
     (iVar2 = FUN_020024cc(param_1 + 0x74,iVar3,0x20), iVar2 != 0)) {
    if (cVar1 != '\0') {
      FUN_0219622c(param_1);
    }
    if (uVar4 == 0) {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    else {
      FUN_02051890(iVar3,param_1 + 0x74,0x20);
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  *(ushort *)(param_1 + 0x32) =
       CONCAT11(*(undefined1 *)(iVar3 + uVar4),*(undefined1 *)(iVar3 + uVar4 + 1));
  *(undefined1 *)(param_1 + 0x455) = 2;
  return;
}

