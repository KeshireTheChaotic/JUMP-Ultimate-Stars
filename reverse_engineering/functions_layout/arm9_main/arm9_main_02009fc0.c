
void FUN_02009fc0(undefined2 *param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 local_58 [19];
  undefined1 auStack_32 [38];
  
                    /* JUS-TAG
                       strings=["11102230246251565404236316680908203125","152587890625","15625","23283064365386962890625","3125","390625","542101086242752217003726400434970855712890625","78125"]
                        */
  puVar3 = local_58;
  if ((int)param_2 < -0x34) {
    if (-0x36 < (int)param_2) {
      FUN_02009f60(param_1,s_11102230246251565404236316680908_02093478,0xfffffff0);
      return;
    }
    if (param_2 == 0xffffffc0) {
      FUN_02009f60(param_1,s_54210108624275221700372640043497_02093448,0xffffffec);
      return;
    }
  }
  else if (param_2 + 0x20 < 0x29) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2 + 0x20) {
    case 0:
      FUN_02009f60(param_1,s_23283064365386962890625_020934a0,0xfffffff6);
      return;
    case 0x10:
      FUN_02009f60(param_1,s_152587890625_020934b8,0xfffffffb);
      return;
    case 0x18:
      FUN_02009f60(param_1,s_390625_020934c8,0xfffffffd);
      return;
    case 0x19:
      FUN_02009f60(param_1,s_78125_020934d0,0xfffffffd);
      return;
    case 0x1a:
      FUN_02009f60(param_1,s_15625_020934d8,0xfffffffe);
      return;
    case 0x1b:
      FUN_02009f60(param_1,&DAT_020934e0,0xfffffffe);
      return;
    case 0x1c:
      FUN_02009f60(param_1,&DAT_020934e8,0xfffffffe);
      return;
    case 0x1d:
      FUN_02009f60(param_1,&DAT_020934ec,0xffffffff);
      return;
    case 0x1e:
      FUN_02009f60(param_1,&DAT_020934f0,0xffffffff);
      return;
    case 0x1f:
      FUN_02009f60(param_1,&DAT_020934f4,0xffffffff);
      return;
    case 0x20:
      FUN_02009f60(param_1,&DAT_020934f8,0);
      return;
    case 0x21:
      FUN_02009f60(param_1,&DAT_020934fc,0);
      return;
    case 0x22:
      FUN_02009f60(param_1,&DAT_02093500,0);
      return;
    case 0x23:
      FUN_02009f60(param_1,&DAT_02093504,0);
      return;
    case 0x24:
      FUN_02009f60(param_1,&DAT_02093508,1);
      return;
    case 0x25:
      FUN_02009f60(param_1,&DAT_0209350c,1);
      return;
    case 0x26:
      FUN_02009f60(param_1,&DAT_02093510,1);
      return;
    case 0x27:
      FUN_02009f60(param_1,&DAT_02093514,2);
      return;
    case 0x28:
      FUN_02009f60(param_1,&DAT_02093518,2);
      return;
    }
  }
  FUN_02009fc0(auStack_32,(int)param_2 / 2);
  FUN_02009e58(param_1,auStack_32,auStack_32);
  if ((param_2 & 1) != 0) {
    iVar2 = 0x13;
    puVar4 = param_1;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((int)param_2 < 1) {
      FUN_02009f60(auStack_32,&DAT_020934f4,0xffffffff);
    }
    else {
      FUN_02009f60(auStack_32,&DAT_020934fc,0);
    }
    FUN_02009e58(param_1,local_58,auStack_32);
  }
  return;
}

