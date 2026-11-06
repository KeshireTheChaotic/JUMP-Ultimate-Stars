
undefined4 FUN_020014e4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG strings=["hashtable.c","table"] */
  if (param_1 == (int *)0x0) {
    FUN_02002068(0x2092f94,0x2092f88,0,0x94);
    return 0;
  }
  iVar1 = (*(code *)param_1[3])(param_2,param_1[1]);
  iVar2 = FUN_02001084(*(undefined4 *)(*param_1 + iVar1 * 4),param_2,param_1[4],0,0);
  uVar3 = 0;
  if (iVar2 != -1) {
    uVar3 = FUN_020012d8(*(undefined4 *)(*param_1 + iVar1 * 4));
  }
  return uVar3;
}

