
ushort * FUN_02005f94(int param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  uint uVar4;
  uint *puVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uVar2 = uStack_1c;
  uStack_20 = 1;
  uVar10 = (ushort)uStack_1c;
  uStack_1c._0_2_ = uVar10 & 0xff00;
  uVar6 = (ushort)uStack_1c;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar7 = (uint)*(ushort *)(param_1 + 2);
  puVar8 = (ushort *)(param_1 + 2);
  if (uVar7 == 0x25) {
    uStack_1c = CONCAT22(*(ushort *)(param_1 + 2),uVar10) & 0xffffff00;
    *param_3 = 1;
    param_3[1] = uStack_1c;
    param_3[2] = 0;
    param_3[3] = 0;
    return (ushort *)(param_1 + 4);
  }
  do {
    bVar1 = true;
    if (uVar7 < 0x2c) {
      if (uVar7 < 0x2b) {
        if ((0x23 < uVar7) || (uVar7 < 0x20)) goto LAB_0200601e;
        if (uVar7 == 0x20) {
          if (uStack_20._1_1_ != '\x01') {
            uStack_20._0_2_ = CONCAT11(2,(char)uStack_20);
          }
        }
        else {
          if (uVar7 != 0x23) goto LAB_0200601e;
          uStack_20 = CONCAT13(1,(undefined3)uStack_20);
        }
      }
      else {
        uStack_20._0_2_ = CONCAT11(1,(char)uStack_20);
      }
    }
    else if ((uVar7 < 0x31) && (0x2c < uVar7)) {
      if (uVar7 == 0x2d) {
        uStack_20 = (uint)uStack_20._1_3_ << 8;
      }
      else {
        if (uVar7 != 0x30) goto LAB_0200601e;
        if ((char)uStack_20 != '\0') {
          uStack_20 = CONCAT31(uStack_20._1_3_,2);
        }
      }
    }
    else {
LAB_0200601e:
      bVar1 = false;
    }
    if (!bVar1) break;
    puVar8 = puVar8 + 1;
    uVar7 = (uint)*puVar8;
  } while( true );
  if (uVar7 == 0x2a) {
    puVar5 = (uint *)*param_2;
    *param_2 = (int)(puVar5 + 1);
    uStack_18 = *puVar5;
    if ((int)uStack_18 < 0) {
      uStack_20 = uStack_20 & 0xffffff00;
      uStack_18 = -uStack_18;
    }
    puVar8 = puVar8 + 1;
    uVar7 = (uint)*puVar8;
  }
  else {
    while( true ) {
      if (uVar7 < 0x80) {
        uVar10 = *(ushort *)(uVar7 * 2 + 0x208d758) & 8;
      }
      else {
        uVar10 = 0;
      }
      if (uVar10 == 0) break;
      uStack_18 = (uVar7 - 0x30) + uStack_18 * 10;
      puVar8 = puVar8 + 1;
      uVar7 = (uint)*puVar8;
    }
  }
  if ((int)0x1fd < (int)uStack_18) {
    uStack_1c = CONCAT22(0xffff,(ushort)uStack_1c);
    *param_3 = uStack_20;
    param_3[1] = uStack_1c;
    param_3[2] = uStack_18;
    param_3[3] = 0;
    return puVar8 + 1;
  }
  puVar9 = puVar8;
  if (uVar7 == 0x2e) {
    puVar9 = puVar8 + 1;
    uStack_20._0_3_ = CONCAT12(1,(ushort)uStack_20);
    uVar7 = (uint)*puVar9;
    if (uVar7 == 0x2a) {
      puVar5 = (uint *)*param_2;
      *param_2 = (int)(puVar5 + 1);
      uStack_14 = *puVar5;
      if ((int)uStack_14 < 0) {
        uStack_20 = CONCAT13(uStack_20._3_1_,(uint3)(ushort)uStack_20);
      }
      puVar9 = puVar8 + 2;
      uVar7 = (uint)*puVar9;
    }
    else {
      while( true ) {
        if (uVar7 < 0x80) {
          uVar10 = *(ushort *)(uVar7 * 2 + 0x208d758) & 8;
        }
        else {
          uVar10 = 0;
        }
        if (uVar10 == 0) break;
        uStack_14 = (uVar7 - 0x30) + uStack_14 * 10;
        puVar9 = puVar9 + 1;
        uVar7 = (uint)*puVar9;
      }
    }
  }
  bVar1 = true;
  uStack_1c._1_3_ = SUB43(uVar2,1);
  uVar3 = uStack_1c._1_3_;
  if (uVar7 < 0x6d) {
    if (uVar7 < 0x68) {
      if (uVar7 != 0x4c) goto LAB_0200616a;
      uStack_1c = CONCAT31(uStack_1c._1_3_,9);
    }
    else if (uVar7 == 0x68) {
      uStack_1c = CONCAT31(uStack_1c._1_3_,2);
      if (puVar9[1] == 0x68) {
        uStack_1c = CONCAT31(uVar3,1);
        puVar9 = puVar9 + 1;
        uVar7 = (uint)*puVar9;
      }
    }
    else if (uVar7 == 0x6a) {
      uStack_1c = CONCAT31(uStack_1c._1_3_,6);
    }
    else {
      if (uVar7 != 0x6c) goto LAB_0200616a;
      uStack_1c = CONCAT31(uStack_1c._1_3_,3);
      if (puVar9[1] == 0x6c) {
        puVar9 = puVar9 + 1;
        uStack_1c = CONCAT31(uVar3,4);
        uVar7 = (uint)*puVar9;
      }
    }
  }
  else if (uVar7 < 0x75) {
    if (uVar7 == 0x74) {
      uStack_1c = CONCAT31(uStack_1c._1_3_,8);
    }
    else {
LAB_0200616a:
      bVar1 = false;
      uStack_1c._0_2_ = uVar6;
    }
  }
  else {
    if (uVar7 != 0x7a) goto LAB_0200616a;
    uStack_1c = CONCAT31(uStack_1c._1_3_,7);
  }
  uVar10 = (ushort)uStack_1c;
  if (bVar1) {
    puVar9 = puVar9 + 1;
    uVar7 = (uint)*puVar9;
  }
  uStack_1c = CONCAT22((short)uVar7,(ushort)uStack_1c);
  uVar4 = uStack_1c;
  uStack_1c._1_3_ = SUB43(uVar4,1);
  if (uVar7 < 0x62) {
    if (0x60 < uVar7) {
LAB_02006244:
      if (uStack_20._2_1_ == '\0') {
        uStack_14 = 0xd;
      }
      uVar6 = uVar10 & 0xff;
      if (((uVar6 == 2) || (uVar6 == 6)) ||
         (((uVar6 == 7 || ((uVar6 == 8 || (uVar6 == 4)))) || (uVar6 == 1)))) {
        uStack_1c = CONCAT22(0xffff,uVar10);
        uVar4 = uStack_1c;
      }
      goto LAB_02006312;
    }
    if (uVar7 < 0x48) {
      switch(uVar7) {
      case 0x41:
        goto LAB_02006244;
      case 0x45:
        goto code_r0x0200627e;
      case 0x46:
        goto code_r0x02006218;
      case 0x47:
        goto code_r0x02006274;
      }
    }
    else if (uVar7 == 0x58) goto LAB_020061f0;
LAB_0200630c:
    uStack_1c = CONCAT22(0xffff,uVar10);
    uVar4 = uStack_1c;
  }
  else {
    if (uVar7 < 100) {
      if (uVar7 == 99) {
        if ((uVar10 & 0xff) == 3) {
          uStack_1c = CONCAT31(uStack_1c._1_3_,5);
          uVar4 = uStack_1c;
        }
        else if ((uStack_20._2_1_ != '\0') || ((uVar10 & 0xff) != 0)) {
          uStack_1c = CONCAT22(0xffff,uVar10);
          uVar4 = uStack_1c;
        }
        goto LAB_02006312;
      }
      goto LAB_0200630c;
    }
    switch(uVar7) {
    case 100:
    case 0x69:
    case 0x6f:
    case 0x75:
    case 0x78:
LAB_020061f0:
      if ((char)uStack_1c == '\t') {
        uStack_1c = CONCAT31(uStack_1c._1_3_,4);
        uVar4 = uStack_1c;
      }
      uStack_1c = uVar4;
      uVar4 = uStack_1c;
      if (uStack_20._2_1_ == '\0') {
        uStack_14 = 1;
      }
      else if ((char)uStack_20 == '\x02') {
        uStack_20 = CONCAT31(uStack_20._1_3_,1);
      }
      break;
    case 0x66:
code_r0x02006218:
      uVar6 = uVar10 & 0xff;
      if ((((uVar6 == 2) || (uVar6 == 6)) || (uVar6 == 7)) || ((uVar6 == 8 || (uVar6 == 4)))) {
        uStack_1c = CONCAT22(0xffff,uVar10);
        uVar4 = uStack_1c;
      }
      else if (uStack_20._2_1_ == '\0') {
        uStack_14 = 6;
      }
      break;
    case 0x67:
code_r0x02006274:
      if (uStack_14 == 0) {
        uStack_14 = 1;
      }
    case 0x65:
code_r0x0200627e:
      uVar6 = uVar10 & 0xff;
      if (((uVar6 == 2) || (uVar6 == 6)) ||
         ((uVar6 == 7 || (((uVar6 == 8 || (uVar6 == 4)) || (uVar6 == 1)))))) {
        uStack_1c = CONCAT22(0xffff,uVar10);
        uVar4 = uStack_1c;
      }
      else if (uStack_20._2_1_ == '\0') {
        uStack_14 = 6;
      }
      break;
    default:
      goto LAB_0200630c;
    case 0x6e:
      if ((char)uStack_1c == '\t') {
        uStack_1c = CONCAT31(uStack_1c._1_3_,4);
        uVar4 = uStack_1c;
      }
      break;
    case 0x70:
      uStack_1c = CONCAT31(uStack_1c._1_3_,3);
      uStack_20 = CONCAT13(1,(undefined3)uStack_20);
      uStack_1c = CONCAT22(0x78,(ushort)uStack_1c);
      uStack_14 = 8;
      uVar4 = uStack_1c;
      break;
    case 0x73:
      if ((uVar10 & 0xff) == 3) {
        uStack_1c = CONCAT31(uStack_1c._1_3_,5);
        uVar4 = uStack_1c;
      }
      else if ((uVar10 & 0xff) != 0) {
        uStack_1c = CONCAT22(0xffff,uVar10);
        uVar4 = uStack_1c;
      }
    }
  }
LAB_02006312:
  uStack_1c = uVar4;
  *param_3 = uStack_20;
  param_3[1] = uStack_1c;
  param_3[2] = uStack_18;
  param_3[3] = uStack_14;
  return puVar9 + 1;
}

