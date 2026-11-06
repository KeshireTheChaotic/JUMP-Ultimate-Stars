
void FUN_0200149c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["hashtable.c"] */
  if (param_2 == 0) {
    FUN_02002068(0x2092f84,0x2092f88,0,0xb6);
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      FUN_02001040(*(undefined4 *)(*param_1 + iVar1),param_2,param_3);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return;
}

