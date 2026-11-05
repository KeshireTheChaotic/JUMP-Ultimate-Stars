
void FUN_038072a0(uint *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 != (uint *)0x0) && (*param_1 == 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    if ((param_1[0x10] != 0) && (param_1[0x10] < param_1[0x11])) {
      param_1 = (uint *)0x0;
    }
  }
  if ((param_1 == (uint *)0x0) || (param_1[0xf] == 0)) {
    uVar2 = OS_DisableInterrupts();
    if (DAT_0380ba70 == 2) {
      bVar1 = false;
      while (!bVar1) {
        uVar3 = FUN_037fbea4(0x27fffe8);
        if (((uVar3 & 0x80) == 0) && (iVar4 = FUN_037fbeb4(DAT_0380ba6c), iVar4 != 0)) {
          FUN_037fe408(66000);
        }
        else {
          FUN_03807284(0);
          bVar1 = true;
          if ((uVar3 & 0x80) == 0) {
            FUN_037fbed4(DAT_0380ba6c);
          }
        }
      }
    }
    FUN_037fd998(&DAT_0380ba9c);
    OS_RestoreInterrupts(uVar2);
  }
  else if (param_1 != (uint *)0x0) {
    iVar4 = FUN_037fbeb4(DAT_0380ba6c);
    if (iVar4 == 0) {
      if (*param_1 == param_1[1]) {
        FUN_03807284(0);
        FUN_037fdaa4(&DAT_0380ba9c,param_1[2],0,FUN_038072a0,param_1);
        *param_1 = 0;
      }
      else if ((*param_1 & 1) == 0) {
        FUN_03807284(2);
        FUN_037fdaa4(&DAT_0380ba9c,param_1[(*param_1 >> 1) + 3],0,FUN_038072a0,param_1);
        *param_1 = *param_1 + 1;
      }
      else {
        FUN_03807284(0);
        FUN_037fdaa4(&DAT_0380ba9c,param_1[(*param_1 >> 1) + 9],0,FUN_038072a0,param_1);
        *param_1 = *param_1 + 1;
      }
      FUN_037fbed4(DAT_0380ba6c);
    }
    else {
      FUN_037fdaa4(&DAT_0380ba9c,0x20b,0,FUN_038072a0,param_1);
    }
  }
  return;
}

